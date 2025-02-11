# 1.Write a generator function that generates the first 10 even numbers. simple python program
def generate_even_numbers():
    num = 2  # Start with the first even number
    while num <= 20:  # The first 10 even numbers are from 2 to 20
        yield num  # Yield the current even number
        num += 2  # Move to the next even number

# Using the generator
even_numbers = generate_even_numbers()

# Print the first 10 even numbers
for number in even_numbers:
    print(number)

# 2.Write a Python program that uses a custom iterator to iterate over a list of integers.
class IntegerListIterator:
    def __init__(self, numbers):
        self.numbers = numbers  # List of integers
        self.index = 0  # Start at the first index

    def __iter__(self):
        return self  # Return the iterator object itself

    def __next__(self):
        if self.index >= len(self.numbers):
            raise StopIteration  # End the iteration when all items are visited
        else:
            result = self.numbers[self.index]  # Get the current number
            self.index += 1  # Move to the next index
            return result  # Return the current number

# Example list of integers
numbers = [10, 20, 30, 40, 50]

# Create an instance of the custom iterator
iterator = IntegerListIterator(numbers)

# Iterate over the list using the custom iterator
for num in iterator:
    print(num)
