<%@ page contentType="text/html;charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KyZXEAg3QhqLMpG8r+8fhAXLRk2vvoC2f3B09zVXn8CA5QIVfZOJ3BCsw2P0p/We" crossorigin="anonymous">
<title>書籍情報の登録</title>
</head>
<body>
<form method="POST" action="ex_book_process.jsp">
<ul class="alert-danger">
<c:forEach var="msg" items="${requestScope['err']}">
    <li>${msg}</li>
</c:forEach>
</ul>
<div>
    <label for="isbn">ISBNコード：</label><br>
    <input id="isbn" type="text" name="isbn" size="25" maxlength="30"
        value="${param.isbn}">
</div>
<div>
    <label for="title">書名：</label><br>
    <input id="title" type="text" name="title" size="35" maxlength="170"
        value="${param.title}">
</div>
<div>
    <label for="price">価格：</label><br>
    <input id="price" type="text" name="price" size="5" maxlength="5"
        value="${param.price}">円
</div>
<div>
    <label for="publish">出版社：</label><br>
    <input id="publish" type="text" name="publish" size="15" maxlength="20"
        value="${param.publish}">
</div>
<div>
    <label for="published">配本日：</label><br>
    <input id="published" type="text" name="published" size="15" maxlength="15"
        value="${param.published}">
</div>
<div>
    <input type="submit" value="登録">
    <input type="reset" value="クリア">
</div>
</form>
</body>
</html>
