package to.msn.wings.selfjsp.chap10;

import java.io.IOException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

import jakarta.servlet.FilterChain;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebFilter;
import jakarta.servlet.http.HttpFilter;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpSession;

@WebFilter("/*")
public class CsrfFilter extends HttpFilter {
    @Override
    public void doFilter(ServletRequest req, ServletResponse res, FilterChain chain)
        throws IOException, ServletException {
        HttpServletRequest request = (HttpServletRequest) req;
        request.setCharacterEncoding("UTF-8");
        if (request.getMethod().equals("GET")) {
            createToken(request);
        } else {
            if (!checkToken(request)) {
                throw new ServletException("不正なアクセスが行われました。");
            }
        }
        chain.doFilter(req, res);
    }

    private void createToken(HttpServletRequest request) {
        MessageDigest md = null;
        HttpSession session = request.getSession();
        try {
            md = MessageDigest.getInstance("SHA-256");
            md.update(session.getId().getBytes());
            session.setAttribute("token", toHex(md.digest()));
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        }
    }

    private boolean checkToken(HttpServletRequest request) {
        HttpSession session = request.getSession();
        String s_token = (String) session.getAttribute("token");
        String r_token = request.getParameter("token");
        if (s_token == null || r_token == null || r_token.isBlank()) {
            return false;
        }
        return s_token.equals(r_token);
    }

    private String toHex(byte[] digest) {
        StringBuffer buff = new StringBuffer();
        for (int i = 0; i < digest.length; i++) {
            buff.append(Integer.toHexString((digest[i] >> 4) & 0x0F));
            buff.append(Integer.toHexString(digest[i] & 0x0F));
        }
        return buff.toString();
    }
}