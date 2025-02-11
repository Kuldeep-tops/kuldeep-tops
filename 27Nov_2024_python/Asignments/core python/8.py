# 1) Write a Python program to skip 'banana' in a list using the continue statement. List1 = ['apple', 'banana', 'mango']
# Define the list
List1 = ['apple', 'banana', 'mango']

# Loop through the list
for fruit in List1:
    if fruit == 'banana':
        continue  # Skip the iteration when the fruit is 'banana'
    print(fruit)

#  2) Write a Python program to stop the loop once 'banana' is found using the break statement.

# Define the list
List1 = ['apple', 'banana', 'mango']

# Loop through the list
for fruit in List1:
    if fruit == 'banana':
        break  # Stop the loop when 'banana' is found
    print(fruit)

