# import os
# print(os.getcwd())



# f = open('sample.txt','r')
f = open('sample.txt')    # automatic takes the  mode in read form


# data = f.read(2)   # this will read only fist two characters
# data = f.read()
data = f.readline()   # read only one line 


print(data)
f.close()