# 1.Write Python programs to demonstrate method overloading and method overriding.
class calculation:
    def add(self,a,b=0,c=0):
        return a + b + c

cal = calculation()
print("Addition of two no is:", cal.add(10,20))
print("Addition of three no is:",cal.add(10,30,50))

#2.
class grandfather:
    def speak(self):
        print("Grandfather is speaking to his son.")
class father(grandfather):
    def speak(self):
        print("Father is talk to his son.")
class child(grandfather):
    def speak(self):
        print("Child is talk to his father.")
ft = father()
ch = child()

ft.speak()
ch.speak()
