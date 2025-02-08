# Tatiana Susov, Financial Calculator Python
greeting="Welcome to your personal financial/budget calculator, lets begin!"
print(greeting)
income = float(input("What is your monthly income?\n"))
rent = float(input("What is your monthly rent?\n"))
utilities = float(input("What is your monthly spending on utilities?\n"))
groceries = float(input("What is your monthly spending on groceries?\n"))
transportation = float(input("What is your monthly spending on transportation?\n"))
savings = float(input("How much money do you plan on saving?\n"))
savings = income/10
total_spending = rent-utilities-groceries-transportation-savings
percent_rent = rent/income*100
percent_utilities = utilities/income*100
percent_groceries = groceries/income*100
percent_transportation = transportation/income*100
percent_spending = total_spending/income*100
percent_savings = savings/income*100
print("You spent $", round(rent,2), "on rent and that is", percent_rent, "% of your income")
print("You spent $", round(utilities,2), "on utilities and that is", percent_utilities, "% of your income")
print("You spent $", round(groceries,2), "on groceries and that is", percent_groceries, "% of your income")
print("You spent $", round(transportation,2), "on transportation and that is", percent_transportation, "% of your income")
print("Every month you should have saved $", round(savings,2), "on savings and that is", percent_savings, "% of your income")