# Tatiana Susov, Financial Calculator Python

def info(income, amount, type):
    pertype = amount/income*100
    print(f"You spend ${amount:.2f} on {type} and that is {pertype:.0f}% of your income")


print("Welcome to your personal financial/budget calculator, lets begin!")
income = float(input("What is your monthly income?\n"))
rent = float(input("What is your monthly rent?\n"))
utilities = float(input("What is your monthly spending on utilities?\n"))
groceries = float(input("What is your monthly spending on groceries?\n"))
transportation = float(input("What is your monthly spending on transportation?\n"))
savings = income/10
total_spending = rent-utilities-groceries-transportation-savings
info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
info(income, savings, "savings")

