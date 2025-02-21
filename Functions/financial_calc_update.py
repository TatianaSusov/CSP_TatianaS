# Tatiana Susov, Financial Calculator Python

def info(income, amount, type):
    pertype = amount/income*100
    print(f"You spend ${amount:.2f} on {type} and that is {pertype:.0f}% of your income.")
   

print("Welcome to your personal financial/budget calculator, lets begin!")

def price(price):
    return float(input(f"what is your monthly spending on {price}? "))

income = price("income")
rent = price("rent")
utilities = price("utilities")
groceries = price("groceries")
transportation = price("transportation")
savings = income/10
total_spending = income-(rent+utilities+groceries+transportation+savings)
info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
info(income, savings, "savings")
info(income, total_spending, "everything in total")

