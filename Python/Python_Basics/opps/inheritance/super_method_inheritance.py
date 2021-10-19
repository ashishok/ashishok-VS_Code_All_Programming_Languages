class Person:
    country = "india"

    def __init__(self):
        print("initialising the Person")

    def takes(self):
        print(" i am breathing ..")




class Employee(Person):
    company = " honda"

    def __init__(self):
        super().__init__()
        print("initialising the Employee")

     
    def takes(self):
        print(" i am an  employee so i am  breathing also ..")
        super().takes()



class Programmer (Employee):
    company = "ashish"

    def __init__(self):
        super().__init__()
        print("initialising the Programmer")            

     

    def takes(self):
        print(" i am a  programmer so i am  breathing also ..")
        super().takes()                             # go and print the base class 
        super().__init__()                      #inititalise the teh both constructor  of employee and person


p = Person()
p.takes()

e = Employee()
e.takes()

pr = Programmer()
pr.takes()
