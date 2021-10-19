t = (1,1,2,4,3)
# t = (1,)   here tupels ends with comma when contain only 1 items
#t = (1)   is the wrong way
print(t)

print(t[0])
print(t[3])
x = t[2]
print(x)

# we cannot update the values of tuples like we use to  do in lists
# t[0] = 23 is wrong and it will give an error 

 
a = (1,1,2,3,5,3)
# b = a.count(1)    # or  print(a.count(1))     count the total no of 1 present inside the tuple  
b =a.index(5)      # or print(a.index(1))        tells at what index inside the tuple 1 is present 
print(b)
 