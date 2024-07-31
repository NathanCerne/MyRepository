# Project 1

# Method for getting the mean value of a list
def getMean(list):
    if len(list)==0:
        return None
    else:
        return sum(list)/len(list)

# Method for getting the lowest value of a list
def getLow(list):
    z = list[0]
    for x in list:
        if z > x:
            z = x
    return z

# Method for getting the highest value of a list
def getHigh(list):
    z = list[0]
    for x in list:
        if z < x:
            z = x
    return z

#main
# Create an empty list of size 5
ARR_LENGTH = 5
myList = [0] * ARR_LENGTH

# Fill the list using user input
for i in range(ARR_LENGTH):
    myList[i] = int(input("Input a value: "))

# get the mean value of the list and print it
myMean = getMean(myList)
print("The mean of your list is", myMean)

# get the lowest value of the list and print it
myLow = getLow(myList)
print("The lowest value of your list is", myLow)

# get the highest value of the list and print it
myHigh = getHigh(myList)
print("The highest value of your list is", myHigh)