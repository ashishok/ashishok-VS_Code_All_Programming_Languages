class Employee:
    company = " google"


    def __init__(self,name,salary,subnit):
        self.name = name             # we can write self.name = self.names but have to chanege the line 13 also as self.names 
        self.salary = salary
        self.subnit = subnit
        print("employee is created")


    def getdetails(self):
        print(f"the name of the employee is {self.name}")
        print(f"the salay of the employee is {self.salary}")
        print(f"the subnit of the employee\
             is {self.subnit}")


    # def getsalary(self,signature):
    #     print(f"salary for this employee in {self.company} is {self.salary}\n{signature}")



    # @staticmethod    # doesn't takes the self as in upper function 
    # def greet():
    #     print("good morning")


ashish = Employee("ashish",100,"youtube")    # initialise the object automatically
ashish.getdetails();