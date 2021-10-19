class Person:
    country = "india"

    def takes(self):
        print(" i am breathing ..")


class Employee(Person):
    company = " honda"

    def getsalary(self):
        print(f"salary is {self.salary} ")

    def takes(self):
        print(" i am an  employee so i am  breathing also ..")



class Programmer (Employee):
    company = "ashish"
    def getsalary(self):
        print(f" no salary to programmer ")


p = Person()
p.takes()

e = Employee() 
e.takes()
# print(e.country)
# print(e.company)

pr = Programmer()
pr.takes()
pr.getsalary()
# print(pr.company)