a = 'hello bob'
try:
    a = int(a)
except:
    a = -1
print('first', a)


c = '123'
try:
    c = int(c)
except:
    c = -1
print('second', c)



e = 'bp'
try:
    print('hello')
    e = int(e)
    print('there')
except:
    e = -1
print('second', e)
