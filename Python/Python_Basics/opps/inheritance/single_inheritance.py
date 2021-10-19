class Employee:
    company = "google"

    def showdetails(self):
        print("this is an employee")


class Prograammer(Employee):
    language ="python"

    def getlanguage(self):
        print(f"the language is {self.language}")

    # def showdetails(self):
        # print("this is an engineer")



e = Employee()
e.showdetails()


p = Prograammer()
p.showdetails()
print(p.company)
print(e.company)