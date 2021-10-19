a = {1,2,3,4,1,2,3,4,'ashish','ashish'}   # in set repetion vlue dont  get printed twice 
print(type(a))
print(a)
print(len(a))     # 1 & 1.0 is same


s = set()
s.add(1)
s.add(2)
print(s)    #add 1 and 2 inside the s set



# b= {}  this syntax willl not create the empty set although it will create the empty dictionary

c = set()
print(type(c))


# tuple  can be added inside the set because its immutable but list nad dictionary couldn't as it can be change

s.add((4,5,6))
print(s)


print(len(a))   # doesn't count the repeted values


a.remove(4)
#a.remove(12) # throes an error as 12 is not present inside the set
print(a)


# print(a.pop())    # rempoves the first element from  the  set
# print(a)


# print(a.clear())


print(a.union({10,12}))


print(a.intersection())
print(a.intersection({3,'ashish'}))

  

 