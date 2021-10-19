try:
    a = int(input("enter the number: "))
    c = 1/a
    print(c)
except ValueError as e:
    print(e)
    print("please enter a valid vlaue")         # use with 12da

except ZeroDivisionError as e:
    print("make sure you are not dividing by 0")            # use with 0

print("thanks for using this code")


