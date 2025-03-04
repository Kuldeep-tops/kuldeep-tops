#1.
class calculation:
    def add(self,a,b=0,c=0):
        return a + b + c
cal = calculation()
print("Addition is : ",cal.add(5,4))
print("Addition is : ",cal.add(10,30,50))
print("Addition is : ",cal.add(30))

#2.
class Birds:
    def flying(self):
        print("Birds flying")
class Eagle:
    def flying(self):
        print("Eagle flying")
Bir = Birds()
Eag = Eagle()

Bir.flying()
Eag.flying()
