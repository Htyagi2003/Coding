#the values of instance variables (state of objects)-the process of writing the state of object in to file is called Pickling(Serialization).
#Unpickling-reading state of an object from file is known as Unpickling(Dserialization).
#dump(object,file) used for pickling and  load(file) used for unpickling.
#Class is a model(Blue Print) each TV is an object and to operate Remote is a reference variable.
import pickle
class Employee:
    def _init_(self,eno,ename,esal,eaddress):
        self.eno=eno
        self.ename=ename
        self.esal=esal
        self.eaddress=eaddress
e=Employee(100,"Ram",10000,"Gzb")
print(e.eno,e.ename,e.esal,e.eaddress)
def display(self):
    print(self.eno,"\t",self.ename,"\t",self.esal,"\t",self.eaddress,"\t")
with open("emp.dat","wb") as f:
    e=Employee(100,"Ram",10000,"Gzb")
    pickle.dump(e,f)
    print("Pickling of object is completed")
with open("emp.dat","rb") as f:
    obj=pickle.load(f)