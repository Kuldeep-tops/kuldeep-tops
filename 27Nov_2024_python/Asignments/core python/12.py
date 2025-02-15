#1. Write a Python program to add elements to a list using insert() and append().
# Creating an initial list
my_list = [10, 20, 30]

# Using append() to add an element at the end of the list
my_list.append(40)

# Using insert() to add an element at a specific position (index 1)
my_list.insert(1, 15)

# Printing the updated list
print(my_list)

# 2.Write a Python program to remove elements from a list using pop() and remove().
# Creating an initial list
my_list = [10, 20, 30, 40, 50]

# Using pop() to remove the last element and return it
popped_element = my_list.pop()

# Using remove() to remove the first occurrence of the element 20
my_list.remove(20)

# Printing the updated list and the popped element
print("Updated list:", my_list)
print("Popped element:", popped_element)
