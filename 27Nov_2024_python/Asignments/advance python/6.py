class Person:
    def __init__(self, name, age):
        self.name = name  
        self.age = age    

    def display_info(self):
        print(f"Name: {self.name}, Age: {self.age}")

person1 = Person("John", 25)

print(f"Name: {person1.name}")
print(f"Age: {person1.age}")

person1.display_info()


