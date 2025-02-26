# Tatiana Susov Old Enough Py

print("Hello, welcome to my program.\n This program will tell you if you are old enough to have certain oppotunities. ")

name = input("What is your name?\n")

print("Hi,", name)

num = int(input("Please enter your current age.\n"))
if num >= 4 and num <= 14:
    print("You are old enough to attend school!")
elif num == 15:
    print("You are old enough to get a learners permit!")
elif num >= 16 and num <= 18:
    print("You are old enough to drive!")
elif num >= 18:
    print("You are old enough to vote!")
else:
    print("You are not old enough to have these certain oppotunities.")