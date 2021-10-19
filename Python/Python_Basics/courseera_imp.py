largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    if num == "done":
        try:
            a = int(num)  
        except:
            print('invlaid input')
        break
    num = int(num)
    if largest is None or largest < num:
        largest = num
    if smallest is None or smallest > num:
        smallest = num   

print("Maximum is", largest)
print("minimum is", smallest)
        
        
 
