l=[1,2,3]
t=(1,2,3)
print(l==t)
x=13
y=12
print(x&y)
print(x<<2)
class Car:
    def __init__(self,model,speed):
        self.model=model
        self.speed=speed
    def display(self):
        print(self.model,self.speed)
print("enter the model of car ")
model=input()
print("enter the speed of car ")
speed=int(input())
b=Car(model,speed)
b.display()