class Employee:
    company = " google"
    def getsalary(self,signature):
        print(f"salary for this employee in {self.company} is {self.salary}\n{signature}")

    @staticmethod    # doesn't takes the self as in upper function 
    def greet():
        print("good morning")



ashish = Employee()
ashish.salary = 100    
ashish.getsalary("hello")   # == Employee.getsalary(ashish)
ashish.greet()  #  ==   Employe.greet()
