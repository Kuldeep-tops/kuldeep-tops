# 1.Write a Python program to access values between index 1 and 5 in a tuple
# Creating a tuple
my_tuple = (10, 20, 30, 40, 50, 60, 70)

# Accessing values between index 1 and 5 (excluding index 5)
sliced_tuple = my_tuple[1:5]

# Printing the sliced tuple
print("Values between index 1 and 5:", sliced_tuple)

# 2.Write a Python program to access alternate values between index 1 and 5 in a tuple.
# Creating a tuple
my_tuple = (10, 20, 30, 40, 50, 60, 70)

# Accessing alternate values between index 1 and 5 (excluding index 5)
sliced_tuple = my_tuple[1:5:2]  # Start at index 1, end at index 5, step 2

# Printing the sliced tuple
print("Alternate values between index 1 and 5:", sliced_tuple)

