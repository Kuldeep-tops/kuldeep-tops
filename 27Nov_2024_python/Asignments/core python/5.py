# 1.Write a Python program to print each fruit in a list using a simple for loop. List1 = ['apple', 'banana', 'mango']
# List of fruits
List1 = ['apple', 'banana', 'mango']
# Loop through each fruit in the list and print it
for fruit in List1:
    print(fruit)

# 2.Write a Python program to find the length of each string in List1.
List1 = ['apple', 'banana', 'mango']

# Loop through each string in the list and print its length
for fruit in List1:
    print(f"The length of '{fruit}' is {len(fruit)}")

# 3.Write a Python program to find a specific string in the list using a simple for loop and if condition.
# List of strings
List1 = ['apple', 'banana', 'mango']

# String to find
search_string = 'banana'

# Loop through each string in the list
for fruit in List1:
    if fruit == search_string:
        print(f"Found '{search_string}' in the list.")
        break  # Exit the loop after finding the string
else:
    print(f"'{search_string}' not found in the list.")

# 4: Print this pattern using nested for loop:
print("markdown\nCopy code")
for i in range(1,6):
    for j in range(1,i+1):
            print("*",end=" ")
    print("")
