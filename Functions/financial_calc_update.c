//Tatiana Susov, Update Financial Calculator C
#include <stdio.h>
#include <math.h>

int info(float price, float income, char type[50]){
   float percent = price/income*100;
   printf("The amount of money that goes to %s is $%.2f, which is %.1f%% of your income.\n", type, price, percent);
}
float userinformation(char charge[20]){
   float answer;
   printf("How much money do you spend on %s?\n", charge);
   scanf("%f", &answer);
   return answer;
}
float income;
int main(void){
   printf("%s\n", "Welcome to your personal financial/budget calculator, lets begin!");
   printf("What is your monthly income?:");
   scanf("%f", &income);
   float savings = income/10;
   float rent = userinformation("rent");
   float utilities = userinformation("utilities");
   float groceries = userinformation("groceries");
   float transportation = userinformation("transportation");
   float spending = (income-rent-utilities-groceries-transportation-savings);
   info(rent, income, "rent");
   info(utilities, income, "utilities");
   info(groceries, income, "groceries");
   info(transportation, income, "transportation");
   info(savings, income, "savings");
   info(spending, income, "spending");
    return 0;
}