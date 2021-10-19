def greet(name):
    a = " hello " + name
    return a
print(greet('ashish'))


def sum(a,b):
    return a+b
s = sum(10,20)
print(s)



def greet(name='stranger'):    # stranger willl work as the default parameter 
    a = " hello " + name
    return a
print(greet())   


def maximum(a,b,c):
    if a>b:
        if a>c:
            return a
        else:
            return c
    else:
        if b>c:
            return b;
        else:
            return c

m = maximum(5,6,9)
print('the greates of all three numbers is ',m)


# recursion

def facto(n):
    if n==1 or n==0:
        return n
    return  n*facto(n-1)
     
       
print(facto(5))
 
