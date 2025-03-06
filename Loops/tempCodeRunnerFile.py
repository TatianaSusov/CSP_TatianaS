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
