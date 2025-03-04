def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    return a / b

def square(a):
    return a * a

def calculator():
    print("Simple Calculator")
    print("Select operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Square")
    
    try:
        choice = int(input("Enter choice (1/2/3/4/5): "))
        if choice not in [1, 2, 3, 4, 5]:
            print("Invalid choice. Please choose a valid operation.")
            return
        
        a = float(input("Enter first number: "))
        
        if choice != 5:
            b = float(input("Enter second number: "))
        
        if choice == 1:
            print(f"{a} + {b} = {add(a, b)}")
        elif choice == 2:
            print(f"{a} - {b} = {subtract(a, b)}")
        elif choice == 3:
            print(f"{a} * {b} = {multiply(a, b)}")
        elif choice == 4:
            try:
                print(f"{a} / {b} = {divide(a, b)}")
            except ZeroDivisionError:
                print("Error: Division by zero is not allowed.")
        elif choice == 5:
            print(f"{a} squared = {square(a)}")
    
    except ValueError:
        print("Error: Invalid input. Please enter a valid number.")

if __name__ == "__main__":
    calculator()

# 2.Write a Python program to demonstrate handling multiple exceptions.
def test():
    try:
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))
        print(f"{a} / {b} = {a / b}")
    except ValueError:
        print("Error: Invalid input. Please enter a valid number.")
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
a = test()
print(a)




