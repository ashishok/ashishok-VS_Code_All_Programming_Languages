a = int(input(" entre the "))
lagest = []
for b in range(1, a+1):
    c = int(input(' ente the no'))
    lagest.append(c)
lagest.sort()
if lagest[a-1]==lagest[a-2]:
    print(lagest[a-3])
else:
    print(lagest[a-2])
