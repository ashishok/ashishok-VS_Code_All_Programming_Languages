class train:
    def __init__(self, name, fare, seats):
        self.name = name
        self.fare = fare
        self.seats = seats

    def getsatatus(self):
        print(f"The name of the train is --> {self.name}")
        print(f"Availble seats are --> {self.seats}")

    def fareinfo(self):
        print(f"The price of the train is --> {self.fare}")

    def booktrain(self):
        if(self.seats > 0):
            print(
                f"your Ticet has been booked! and your sear number is {self.seats} ")
            self.seats = self.seats - 1
        else:
            print(f"Sorry! all the seats are full")


intercity = train("Vaishali Express", 90, 300)
intercity.getsatatus()
intercity.fareinfo()
intercity.booktrain()
intercity.getsatatus()

