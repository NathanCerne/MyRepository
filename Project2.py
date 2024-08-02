# Project 2

class Address(object):
    """Store info on student's address"""

    """Create the address object"""
    def __init__(self, streetName, houseNumber, apartmentNumber, city, state, country):
        self.streetName = streetName
        self.houseNumber = houseNumber
        self.apartmentNumber = apartmentNumber
        self.city = city
        self.state = state
        self.country = country

    """function for printing address"""
    def display(self):
        print("Address:", self.houseNumber, self.streetName, ", apt", self.apartmentNumber, self.city, self.state, self.country)

class Student(object):
    """Stores info on the student"""
    email = ""
    name = ""

    """Create the student object"""
    def __init__(self, studentID):
        self.studentID = studentID
        self.address = Address("", 0, "", "", "", "")

    """create an address object to the student object"""
    def addAddress(self, streetName, houseNumber, apartmentNumber, city, state, country):
        self.address = Address(self, streetName, houseNumber, apartmentNumber, city, state, country)

    """print student object"""
    def display(self):
        print(self.name, "has student id:", self.studentID, ", eamil:", self.email)
        self.address.display()
