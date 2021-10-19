class Employee:
    company = "camel"
    salary = "100"
    location = "delhi"


    # def getsalary(self,sal):
    #     self.salary = sal           # self.__init__.salary = sal    thsi will work same as the @staticemethods 


    @classmethod
    def getsalary(cls,sal):
        cls.salary = sal 

        

e = Employee()
print(e.salary)
e.getsalary(200)
print(e.salary)
print(Employee.salary)