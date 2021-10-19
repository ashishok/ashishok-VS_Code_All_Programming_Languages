class Employee:
    company = "visa"
    ecode = 120


class Freelancer:
    company = " fiver"
    level = 2

    def upgradelevel(self):
        self.level = self.level + 1


class Programmer (Employee, Freelancer):
    name = "ashish"


p = Programmer()
print(p.level)
p.upgradelevel()
print(p.level)


print(p.company)   # will print The visa as in line 14 Employee class comes first
