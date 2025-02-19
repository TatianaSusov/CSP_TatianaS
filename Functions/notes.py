# Tatiana Susov, Functions Notes in Python

#Function is an action stored in a key word
#number = int(intput("Can i get a number:\n"))
#def add(numOne, numTwo):
  # numOne = int(input("Give me a number:\n"))
   #numTwo = int(input("Give me a number:\n"))
  # print(numOne+numTwo) #parameters go in the parenthesis seperated by comas
#add(int(input("tell me a numbe:\nr")),number)
#add(2,4)#aruenets ar given when the function is called AND must match the number of parameters
#add(7,21)

def user(word):
   return input(f"tell me a {word} ")



name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} and somehow got to {place}")