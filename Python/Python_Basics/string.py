a = "helloguys"
b = "ashish"
c = print(a + b)

print(b[0])
print(b[1])
print(b[2])
 

print(a[0:3])     # 3 will not be included it will be from 0 to 2
print(a[1:3])
print(a[1:])  # same as print(a[1:lastword])
print(a[:3])

print(b[-4:-1])

h = a[0:4]
print(h)
print(a[2:-1])


print(a[1:8:2])    # skip evry 2 word from the line 



print(len(a))
print(a.endswith("s"))   # tells with what alphabet the word is ending the helloguys ends with s so it will print true
print(a.count("l"))    # counts total no of l in the word
print(a.count("helloguys"))
print(a.capitalize()) # MAKES THE FIRST LETTER CAPITAL
print(a.find("y"))     # tells at no the y is present int the word
print(a.replace("l","a"))   # replace all the l with a in the word
