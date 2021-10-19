class Employee:
    company = " google"
    def getsalary(self):
        print("salary is 100K")
        # print(f"salary is {self.salary}")
        

ashish = Employee()
# ashish.salary = 100   # activate line 5 with this line
ashish.getsalary()
# Employee.getsalary(ashish)   #self takes the 1 argumests which is ashish here     and      the above line can be written as this line 

