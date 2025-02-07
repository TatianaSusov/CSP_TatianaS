# Tatiana Susov, Financial Calculator Python

# write a print statement telling the user what the program is (budget calculator)
greeting="Welcome to your personal financial calculator, lets begin!"
print(greeting)
# Ask for monthly income (user input)
income = float(input("What is your monthly income\n"))
# Ask for rent (user input)
rent = float(input("What is your monthly rent\n"))
# Ask for utilities amount (user input)
utilities = float(input("What is your monthly spending on utilities\n"))
# Ask for groceries amount (user input)
groceries = float(input("What is your monthly spending on groceries\n"))
# Ask for transportation amount (user input)
transportation = float(input("What is your monthly spending on transportation\n"))
spending = float(input("What is your monthly extra spending? "))
# Calculate savings as 10% of income (variable)
savings = (income/10)
savings_percent = (savings/income*100)
# Calculate spending money income - (rent+utilities+groceries+transportation+savings) (variable)
total_spending = (income-rent-utilities-groceries-transportation-savings)
# Calculate percent of rent (rent/income) (variable)
percent_rent = (rent/income*100)
# Calculate percent of utilities (utilities/income) (variable)
precent_utilities = (utilities/income*100)
# Calculate percent of groceries (groceries/income) (variable)
precent_groceries = (groceries/income*100)
#Calculate percent of transportation (transportation/income) (variable)
percent_transportation = (transportation/income*100)
# Calculate percent of spending money (spending money/income) (variable)
percent_spending = (spending/income*100)
#Calculate percent of savings (savings/income) (variable)

# tell user category spending amount and percent for rent ("You spend $xx.xx on rent and that is xx% of your income")

# tell user category spending amount and percent for utilities ("You spend $xx.xx on utilities and that is xx% of your income")

# tell user category spending amount and percent for groceries ("You spend $xx.xx on groceries and that is xx% of your income")

# tell user category spending amount and percent for transportation ("You spend $xx.xx on transportation and that is xx% of your income")

# tell user category spending amount and percent for spending ("You spend $xx.xx on spending and that is xx% of your income")

# tell user category spending amount and percent for saving ("You spend $xx.xx on savings and that is xx% of your income")