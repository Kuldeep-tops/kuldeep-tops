# 1.Write a Python program to find greater and less than a number using if_else

number = int(input("Enter a number: "))

if number > 0:
    print(f"{number} is a greter number.")
else:
    print(f"{number} is a less number.")

# 2.Write a Python program to check if a number is prime using if_else.

for j in range(3,5) :

    num = int(input("Enter a number: "))
    flag = 0

    for i in range(2,num):
        if num%i==0:
            flag=1
            break

    if flag==0:
        print(f"{num} is prime")
    else : 
        # pass
        print(f"{num} is not prime")
# 3.Write a Python program to calculate grades based on percentage using if-else ladder.

# Input the percentage of marks
percent = float(input("Enter your percentage: "))

# Determine the grade using if-else ladder
if percent >= 100-90:
    grade = 'A'
elif percent >= 80-70:
    grade = 'B'
elif percent >= 70-60:
    grade = 'C'
elif percent >= 60-50:
    grade = 'D'
else:
    grade = 'F'

# Output the grade
print(f"Your grade is: {grade}")

# 4.Write a Python program to check if a person is eligible to donate blood using a nested if.
# Input details from the user
age = int(input("Enter your age: "))
weight = float(input("Enter your weight in kg: "))

# Check if the person is eligible to donate blood
if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You are not eligible to donate blood because your weight is less than 50 kg.")
else:
    print("You are not eligible to donate blood because you are under 18.")
