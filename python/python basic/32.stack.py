books=[]
books.append("java")
books.append("C programming")
books.append("Os")
books.append("python")
print(books)

books.pop()
print("now the top position book is: ",books[-1])

books.pop()
print("now the top position book is: ",books[-1])


books.pop()
print("now the top position book is: ",books[-1])


books.pop()
if not books:
    print("no books here")