<%@ page contentType="text/html;charset=UTF-8"
    import="java.sql.*, javax.naming.*, javax.sql.*, to.msn.wings.selfjsp.chap10.CheckUtil"  %>
<%
request.setCharacterEncoding("UTF-8");
String isbn = request.getParameter("isbn");
String title = request.getParameter("title");
String price = request.getParameter("price");
String publish = request.getParameter("publish");
String published = request.getParameter("published");
CheckUtil c = new CheckUtil();
c.requiredCheck(isbn, "ISBNコード");
c.regExCheck(isbn, "^978-4-[0-9]{3,6}-[0-9]{3,6}-[0-9X]{1}$",
    "ISBNコード");
c.duplicateCheck(isbn, "SELECT isbn FROM book WHERE isbn = ?",
    "ISBNコード");
c.requiredCheck(title, "書名");
c.lengthCheck(title, 100, "書名");
c.numberTypeCheck(price, "価格");
c.rangeCheck(price, 10000, 1, "価格");
c.dateTypeCheck(published, "配本日");
if(c.hasErrors()){
    request.setAttribute("err", c.getError());
    application.getRequestDispatcher("/chap10/ex_book_form.jsp").forward(request, response);
    return;
}

Context context = new InitialContext();
DataSource ds = (DataSource)context.lookup("java:comp/env/jdbc/selfjsp");
try (Connection db = ds.getConnection()) {
    PreparedStatement ps = db.prepareStatement("INSERT INTO book(isbn, title, price, publish, published) VALUES(? ,? ,? ,?, ?)");
    ps.setString(1, request.getParameter("isbn"));
    ps.setString(2, request.getParameter("title"));
    ps.setString(3, request.getParameter("price"));
    ps.setString(4, request.getParameter("publish"));
    ps.setString(5, request.getParameter("published"));
    ps.executeUpdate();
}

response.sendRedirect("ex_book_form.jsp");
%>
