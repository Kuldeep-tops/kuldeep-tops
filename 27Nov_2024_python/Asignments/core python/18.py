# 1. Write a Python program to create a function that takes a string as input and prints it
# Define a function that takes a string as input and prints it
def print_string(input_string):
    print(input_string)

# Call the function with a string argument
print_string("Hello, Python!")

# 2.# Define a function that takes a string as input and prints it
# Function for addition
def add(x, y):
    return x + y

# Function for subtraction
def subtract(x, y):
    return x - y

# Function for multiplication
def multiply(x, y):
    return x * y

# Function for division
def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "Error! Division by zero."

# Main function to run the calculator
def calculator():
    print("Select operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    
    # Take user input for operation


    choice = input("Enter choice (1/2/3/4): ")
    
    # Take user input for numbers
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    
    # Perform the operation based on user choice
    if choice == '1':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif choice == '2':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif choice == '3':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif choice == '4':
        print(f"{num1} / {num2} = {divide(num1, num2)}")
    else:
        print("Invalid input")

# Run the calculator
calculator()
