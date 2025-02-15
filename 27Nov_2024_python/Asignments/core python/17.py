# 1.Write a Python program to update a value in a dictionary.
# Initial dictionary
my_dict = {"name": "Alice", "age": 25, "city": "New York"}

# Updating the value of the key 'age'
my_dict["age"] = 26

# Printing the updated dictionary
print(my_dict)

# 2.Write a Python program to merge two lists into one dictionary using a loop.
# Two lists
keys = ['a', 'b', 'c']
values = [1, 2, 3]

# Initialize an empty dictionary
my_dict = {}

# Loop to merge lists
for i in range(len(keys)):
    my_dict[keys[i]] = values[i]

# Print the merged dictionary
print(my_dict)

