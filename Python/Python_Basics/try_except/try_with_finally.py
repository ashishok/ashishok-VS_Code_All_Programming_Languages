try:
    i = int(input("enter the number "))
    c = 1/i
except Exception as e:
    print(e)
    exit()

finally:            # will print if regardless of any error    
    print("we were succesful")


print(" all good")