# 1.
class Parent:
    def speak(self):
        print("Parent is speaking")

class Child(Parent):
    def greet(self):
        print("Hello from Child")

child = Child()
child.speak()  
child.greet()  

# 2.
class Father:
    def work(self):
        print("Father is working")

class Mother:
    def cook(self):
        print("Mother is cooking")

class Child(Father, Mother):
    def play(self):
        print("Child is playing")

child = Child()
child.work()   
child.cook()   
child.play()   

# 3.
class Grandparent:
    def wisdom(self):
        print("Grandparent's wisdom")

class Parent(Grandparent):
    def advice(self):
        print("Parent's advice")

class Child(Parent):
    def learn(self):
        print("Child is learning")

child = Child()
child.wisdom()   
child.advice()   
child.learn()  

# 4.
class Animal:
    def speak(self):
        print("Animal is making a sound")

class Dog(Animal):
    def bark(self):
        print("Dog is barking")

class Cat(Animal):
    def meow(self):
        print("Cat is meowing")

dog = Dog()
dog.speak()  
dog.bark()   

cat = Cat()
cat.speak()  
cat.meow()   
