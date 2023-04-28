#Class-in python everything is object to create object we requireb some models or plan or blueprint which is nothing but class
# we can write a class to represent properties (attributes) and action (behvaior) of object
# properties can be represented by variables 
#action can be represented by methods
#hence class contain both method and variables
class Student:
    '"this is class of students of a class"'
    print(__doc__)
    #help(Student)
    def __init__(self,x,y,z):
        self.name=x
        self.marks=y
        self.rollno=z
        print("HELLO")#automaticallly called
    def details(self):
        print('name=',self.name)
        print('roll no=',self.rollno)
        print('marks=',self.marks)
s=Student('Harsh',100,72)
s1=Student('Harshit',0,88)
s.details()
s1.details()
print(s.marks,s.rollno,s.name)
print(s1.__dict__)
#documentation string represents the descreption of the class with in the doc string is always optional. we can get docstring by using the following two ways
#1.print(doc)or help()
#types of variables and methods
#vraibles-
#1. instance-ie object level variables 2. static-class level variables 3. local variabeles -methods level variable
#types of methods
#1.instance 2.class 3. static-methods
# self variable-self is the defalt variable which is always pointing to current object like this keyword in java. by using self we can acess instance variable and instance method of objects
#1.self should be parameter inside constructur 
#2. self should be first parameter in instance methods
#CONSTRUCTER-its a specail method in python 
#2. name should be def __init__(self,x,y,z):
#contructor wil be executed automatically at the time of obect creation
#the main pupose of cont. is to declare and is to initailize instance variable
#per object cont.called one time ,it can take at least one arguement(self)
#consturctor is optional and if we are not providing any contsructyor then python will provied default contructor.
# class test:
#     def __init__(self):
#         print(' contructor Execution')
#     def M1(self):
#         print('Method Execution')
# t1=test()
# t2=test()
# t2=test()
# t1.M1()
#name of method is anything and cont-__intit__
#INSTANCE VARIABLE- if the value of variable is varried from object to object is called instance variable
#for every object a sperate copy is created for all objects
#where we can declare ninstace vraible
#1.inside constructor through self
#2. inside instance method through self
#3.outside of class by using object refrencing varibale
# class Employe:
#     def __init__(self):
#         self.ename='Harsh'
#         self.eno='100'
#         self.emarks='30'
#     def m2(self):
#         self.c=30
# e1=Employe()
# e1.m2()
# print(e1.__dict__)
# class test1:
#     x=4 #static variable
     
#     def __init__(self):
#         self.a=10
#         self.b=20
#     def m1(self):
#             self.c=30
#             print(self.a)
# t=test1()
# t2=test1()
# t.m1()
# t.d=40
# print(t.__dict__)
# print(test1.__dict__)
# print(t.x,t.a)
# print(t2.x,t2.a)
# test1.x=888
# t.a=890
# print(t.x,t.a)
# print(t2.x,t2.a)
#STATIC VARIABLE-if the value of variable is not varied from object to object such type of varibel we have to declare with in the class directly but outside of menthods usch type of variables are clalled as static variables
#for total class only one copy of static variable 
#various palace to declare static varible-
#1. new scan declare with in the class
# 2. inside constructor by using class name
#3. inside instance method by using class name
#4. inside classs method by using class name or cls varibale
#5. inside static method by using class name 
#6.outside from the class using class name 
#HOW TO ACESS STATIC VARIABLE-
#1.inside constructer by using self or class name
#2.inside instance method by using self or class name
#3.inside class method by using cls or class name
#4.inside static method by  class name
#5.outide class method by using object refrence  or class name
#to meet temporary needs of programmer we can declare variables inside a method directly suvh type of variable are class local variables or local varianles
#types of method-
#1. instance method-inside the method implimentation idf we are using instance variable then suvh type of variable is called instance variables
# inside the intsnce method variable we have to pass self variable
#2.class methode- inside the method implementation if we are using only class variable (static varaibles) the such tyoes of we shuld declare as class method . we can declare class metthod by sing @class method decorator
# for class method we should provide cls method at the time of declarartion
#static method-in gebral we methods are general utility merhode inside these methods we would not use any instance or clas  obariables, here we not provide self or cls argument at the tiime of declarartion
# we can declare static metrhode explicitly by sing @ static method decorator, we can access static method by using class name or object varible
#POLYMORPHISM-
#1.duck typing philosophy pof python(dynamically type)
#2 overloading ,2.1.operator overloading , method , constructor
#3.overriding-1.method over rding and 2. constructor overriding
#we can use same operator for diffrent purpose . python supoorst operator overloading
class Book:
    def __init__(self,pages):
        self.pages=pages
    def __add__(self,other):
        return self.pages+other.pages
b=Book(100)
c=Book(200)
#print(c+b)
print(Book.__add__(b,c))
#we can overload + operator to work with book object also for every operator magic methods are avaialable to overload any operator we have to override that method in our class. inetrnally + opeartor is implimented by sing __add__
#if two method having same name but different types of arguement then those methods arguments 
# but in python method overloading is not possible if we ar etring to declare multiple methods with same name and diffrent no. of arguments the python will cinsider only last method
#HOW WE CAN HANDLE OVERLOADED METHODS REQUIREMENT in python-:
#most of time if methods vraible no. of arg required then w can handle defalt arg or with variable no. of arguments
class Test2: #var argument
    def sum(self,*a):
        total=0
        for x in a:
            total=total+x
        print("sum of numbers",total)
t6=Test2()
t6.sum(10,20)
t6.sum(10,20,30)
t6.sum(10,20,40,50)
t6.sum()
#constructer overloading is not possible in python - if we define multiple constructor then last constrictyer will be consider.but based on our requirement we can declare constructor with deffalut avrgument and varible no. of arguments
#METHOD OVERIDING-whatever members are available in parent class are by defalut avaibale to child class through inheritance if the child class not satisfied with parent class implimentation then chlid class is allowed to reddefine the method based  on its requirement this concept is class over riding 
#overiding concept availabe for both varibles and methods
import sys
class Test3:
    pass
t7=Test3()
t8=t7
t9=t7
t10=t7
print(sys.getrefcount(t7))
#how we can use members of one class to another class?
#1. by using composition (HAS _A)
# 2. by using inheritance(IS-A) - inheritance-1.single,multiple,multilevel,hiraichal
def multi (a,b):
    if(b==0 or a==0):
        return 0
    if(b==1):
        return a
    else:
        return a+multi(a,b-1)
print(multi(4,0))

def fib(n):
    if(n==0 or n==1):
        return n
    else:
        return fib(n-1)+fib(n-2)
print(fib(12))

def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*(fact(n-1))
print(fact(5))
import time
def memo(m,d):
    if m in d:
        return d[m]
    else:
        d[m]= memo(m-1,d)+memo(m-2,d)
        return d[m]
d={0:1,1:1}
start=time.time()
print(memo(48,d))
print(time.time()-start)

print("hi")
try:
    print(10/0)
except:
    print("try non zero")
# print(10/0)
print("hi")