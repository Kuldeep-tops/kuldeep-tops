#1. Write a Python program to demonstrate string slicing.

text = "Hello, World!"

# Slice from index 0 to 4 (Excludes index 5)
slice1 = text[0:5]
print("Slice 1:", slice1)  # Output: Hello

# Slice from index 7 to the end
slice2 = text[7:]
print("Slice 2:", slice2)  # Output: World!

# Slice from the beginning to index 5 (Excludes index 5)
slice3 = text[:5]
print("Slice 3:", slice3)  # Output: Hello

# Slice every second character from index 0 to index 11
slice4 = text[0:12:2]
print("Slice 4:", slice4)  # Output: Hlo ol

# Slice using negative index (last two characters)
slice5 = text[-2:]
print("Slice 5:", slice5)  # Output: d!

# 2.Write a Python program that manipulates and prints strings using various string methods. simple python program

text = "  Hello, Python World!  "

# 1. Convert the string to uppercase
upper_text = text.upper()
print("Uppercase:", upper_text)  # Output: "  HELLO, PYTHON WORLD!  "

# 2. Convert the string to lowercase
lower_text = text.lower()
print("Lowercase:", lower_text)  # Output: "  hello, python world!  "

# 3. Remove leading and trailing whitespace
stripped_text = text.strip()
print("Stripped:", stripped_text)  # Output: "Hello, Python World!"

# 4. Replace a substring with another
replaced_text = text.replace("Python", "Java")
print("Replaced:", replaced_text)  # Output: "  Hello, Java World!  "

# 5. Split the string into a list using a delimiter
split_text = text.split(",")
print("Split:", split_text)  # Output: ['  Hello', ' Python World!  ']

# 6. Find the index of a substring
index = text.find("Python")
print("Index of 'Python':", index)  # Output: 9

# 7. Check if the string contains a substring
contains_python = "Python" in text
print("Contains 'Python':", contains_python)  # Output: True

# 8. Convert the string to title case (first letter of each word capitalized)
title_case_text = text.title()
print("Title Case:", title_case_text)  # Output: "  Hello, Python World!  "

# 9. Count occurrences of a substring
count_python = text.count("Python")
print("Count of 'Python':", count_python)  # Output: 1
