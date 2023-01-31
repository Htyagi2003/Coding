import csv
import os
import sys
with open("new.csv",'w') as f:
    v=csv.writer(f) #it will return writer object of f.
    v.writerow(["Sno","Name","Salary","Address"])
    n=int(input("Enter no.of Employees:"))
    for i in range(n):
        Sno=input("Enter Employee Number: ")
        Name=input("Enter Employee Name: ")
        Salary=float(input("Enter Employee Salary: "))
        Address=input("Enter Employee Address: ")
        v.writerow([Sno,Name,Salary,Address])
print("Total Employee written successfully")