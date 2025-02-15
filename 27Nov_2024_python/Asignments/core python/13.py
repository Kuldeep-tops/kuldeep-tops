# 1.Write a Python program to iterate over a list using a for loop
# Creating a list
my_list = [10, 20, 30, 40, 50]

# Iterating over the list using a for loop
for element in my_list:
    print(element)

#2. Write a Python program to sort a list using both sort() and sorted().
# Creating a list
my_list = [50, 20, 40, 10, 30]

# Using sort() to sort the list in place (modifies the original list)
my_list.sort()
print("Sorted list using sort():", my_list)

# Creating a new list to show sorted() (does not modify the original list)
another_list = [50, 20, 40, 10, 30]
sorted_list = sorted(another_list)
print("Sorted list using sorted():", sorted_list)

# Showing that the original list is unchanged
print("Original list after sorted():", another_list)

