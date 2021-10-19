class Employee:
    company = " google"
    salary = 100

ashish = Employee()
vikash  = Employee()

# ashish.salary =300            # if tha salary here is not instanced the both of their salary would be 100
# vikash.salary =400            # if tha salary here is not instanced the both of their salary would be 100
                                #  instance attributes takes the precedence over the class attributes 

print(ashish.company)
print(ashish.salary)
print(vikash.salary)
# print(ashish.address)   # this will through an error as there is no address is present in  the class/instances
