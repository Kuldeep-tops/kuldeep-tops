# 1.
import re
pattern = r'Python'  
string = 'I am learning Python programming language.'
result = re.search(pattern, string)

if result:
    print("Word found:", result.group()) 
else:
    print("Word not found.")

# 2.
import re
pattern = r'Python'  
string = 'Python is a popular programming language.'
result = re.match(pattern, string)

if result:
    print("Word matched:", result.group())  
else:
    print("Word not matched at the beginning.")
