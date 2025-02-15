#1. Write a Python program to import the math module and use functions like sqrt(), ceil(),floor()
import math  # Import the math module

# Using the sqrt() function to calculate the square root
num = 16
square_root = math.sqrt(num)
print(f"The square root of {num} is: {square_root}")

# Using the ceil() function to round a number up to the nearest integer
float_num = 4.2
ceil_value = math.ceil(float_num)
print(f"The ceiling value of {float_num} is: {ceil_value}")

# Using the floor() function to round a number down to the nearest integer
floor_value = math.floor(float_num)
print(f"The floor value of {float_num} is: {floor_value}")

# 2.Write a Python program to generate random numbers using the random module.
import random  # Import the random module

# Generate a random float number between 0 and 1
random_float = random.random()
print(f"Random float between 0 and 1: {random_float}")

# Generate a random integer between 1 and 100
random_int = random.randint(1, 100)
print(f"Random integer between 1 and 100: {random_int}")

# Generate a random number from a specified range with step
random_range = random.randrange(0, 50, 5)  # Numbers from 0 to 50 with a step of 5
print(f"Random number from 0 to 50 with step 5: {random_range}")

# Choose a random element from a list
colors = ['red', 'blue', 'green', 'yellow']
random_choice = random.choice(colors)
print(f"Random color chosen: {random_choice}")
