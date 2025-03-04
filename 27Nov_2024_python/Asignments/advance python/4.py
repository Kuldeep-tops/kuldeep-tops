#1. Write a Python program to read the contents of a file and print them on the console.
f = open("home.txt")
data = f.read()
print(data)
f.close()
# 2.Write a Python program to write multiple strings into a file
f = open("home.txt","w")
f.write("Hello Python ,this is my first file\n")
f.write("python is a programming language\n")
f.write("The python is a high level language\n")
f.write("python is a obeject oriented programming language\n")
f.close()

