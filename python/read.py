import csv
f = open("new.csv", 'r')
r = csv.reader(f)
data = list(r)
print(type(data))
print(data)