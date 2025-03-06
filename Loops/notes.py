# Tatiana Susov, Loops Notes in Python

# 1. What is a loop? 
    #A section of code that is going to repeat.

# 2. What are the two types of loops?
    # While-loop
x = 0
while x < 10:
    print("Hello", x)
    x +=1

    #for loop
nums = [3,5,7,2,8]
for num in nums:
    print(num)

# 3. What is iteration
    #The act of repeating something

# 4. What are lists? 
    # A bunch of values in the same variable
siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tori", "Treyson", "Jeff", "Hailey"]
#Print one item from the list
print(siblings[3])
#Change an item in a list
siblings[7] = "Jake"
#remove an item from the list
#siblings.pop(5)

# 5. How do you make lists in python? 
    # [] around the list, between each item in the list
    #list items must be proper data types
# 6. How do you make for loops in python? 
num = 1
for sibling in siblings:
    print(f"{num}. {sibling} Larose")
    num +=1

# using range instead of a list
for num in range(1,11, 2):
    print(num)
# 7. How do you make while loops in python?
import random

#num = 1
#rand = random.randint(1,20)
#while num < 21:
#   if num == rand:
  #   print(f"Goose!")
 #    break #continue #tells loop to be done
 #  else:
 #      print("Duck")
#num += 1
   
   #continue tells the loop to stop that iteration and start again