# Tatiana Susov Old Enough Py

print("Hello, welcome to my program.\n This program will tell you if you are old enough to have certain oppotunities. ")

name = input("What is your name?\n")

if name == "Vienna":
    print("Oh your the teacher.... never mind.\n")
    print("You're old enough for everything anyways.\n")
    print("You can still do the program though.\n")
else:
    print("Hi friend.")

num = input("Please enter your current age.\n")
if num >= 18:
    print(f"Wow, {num}! this means that you can vote on government related things! ")
else:
    print(f"You are not old enough to vote on governemnt related things.")