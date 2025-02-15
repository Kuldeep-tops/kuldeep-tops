#1.Write a Python program to apply the map() function to square a list of numbers.
# List of numbers
numbers = [1, 2, 3, 4, 5]

# Use map() to square each number
squared_numbers = map(lambda x: x ** 2, numbers)

# Convert the result to a list and print it
print(list(squared_numbers))

# 2.Write a Python program that uses reduce() to find the product of a list of numbers.
from functools import reduce

# List of numbers
numbers = [1, 2, 3, 4, 5]

# Use reduce() to find the product of all numbers
product = reduce(lambda x, y: x * y, numbers)

# Print the result
print(product)
# 3.Write a Python program that filters out even numbers using the filter() function.
# List of numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Function to filter out even numbers
def is_odd(num):
    return num % 2 != 0

# Using filter() to apply the is_odd function to the numbers list
odd_numbers = filter(is_odd, numbers)

# Converting the filter object to a list and printing the result
print(list(odd_numbers))
