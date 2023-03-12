import csv
f = open("new.csv", 'r')
r = csv.reader(f)
data = list(r)
print(type(data))
print(data)
#the value of instance variable(state of object)-the process of writing the state of object in to file is called pickling (serialization).
#unpickling- reading state of an objevt from file is known as unpickling(unserialization).
# 2 function for pickling and unpickling-dumb(object,file) and load(file)
# class is model(blueprint) each tv is an object or to operate a tv remote is rerfrence variable 