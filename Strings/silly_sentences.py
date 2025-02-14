# Tatiana Susov, Silly Sentences Python

print ("Welcome to the silly sentences program, a program designed to make a silly mad-lib. Let's begin!\n")
animal = input ("Please input the name of an animal\n").strip()
noun_1 = input ("Please input a noun of your choice\n").strip()
verb_pt = input ("Please input a present tense verb\n").strip()
noun_2 = input ("Please input a second noun of your choice\n").strip()
place = input ("Please input a place of your choice\n").strip()
print ("Here is your mad-lib!")
print ("My", animal,"always takes my", noun_1, "when I am", verb_pt+". Now I have to chase him around with a/an", noun_2, "in my hand so I can get my", noun_1, "back before going to", place+ ".") 
