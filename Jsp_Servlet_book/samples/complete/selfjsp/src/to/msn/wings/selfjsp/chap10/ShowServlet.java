package to.msn.wings.selfjsp.chap10;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;

import jakarta.servlet.ServletContext;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/chap10/ShowServlet")
public class ShowServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
        throws ServletException, IOException {
        String root = "/WEB-INF/data/";
        ServletContext application = this.getServletContext();
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();

        boolean flag = false;
        File fileRoot = new File(application.getRealPath(root));
        for (File f : fileRoot.listFiles()) {
            if (f.isFile() && f.getName().equals(request.getParameter("path"))) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            throw new ServletException("不正な要求です。");
        }

        try (BufferedReader buf = Files.newBufferedReader(
                Paths.get(application.getRealPath(root + request.getParameter("path"))), StandardCharsets.UTF_8)) {
            while (buf.ready()) {
                out.println(buf.readLine() + "<br>");
            }
        }
    }
}
