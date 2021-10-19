class Employee:
    company = "bharat gas"
    salary = 1000
    salarybonus = 100
    # totalsalary = 1100

    @property
    def totalsalary(self):
        return self.salary + self.salarybonus

    @totalsalary.setter
    def totalsalary(self,val):
        self.salarybonus = val - self.salary  

e = Employee()
print(e.totalsalary)               # we use write e.totalsalary()     but  it becomes property now
e.totalsalary = 1500
print(e.salary)
print(e.salarybonus)               
