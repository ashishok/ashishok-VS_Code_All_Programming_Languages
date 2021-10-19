a = [1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20]



# b = []
# for item in a :
#     if item%2 == 0:
#         b.append(item)
# print(b)



b =[i for i in a if  i%2==0]
print(b)


# for set 
t = [1,4,2,4,1,2,3]
s = {i for i in t}
print(s)