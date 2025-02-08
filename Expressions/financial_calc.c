//Tatiana Susov, Financial Calculator C
#include <stdio.h>

int main(void){
 printf("%s\n", "welcome to your personal financial/budget calculater, lets begin!");
 float income, rent, utilities, groceries, transportation, savings, spending,total;
 float pincome, prent, putilities, pgroceries, ptransportation, psavings, pspending;
 printf("What is your monthly income?:");
 scanf("%f", &income);
 printf("What is your monthly rent?:");
 scanf("%f", &rent);
 printf("What is your monthly spending on utilities?:");
 scanf("%f", &utilities);
 printf("What is your monthly spending on transportation?:");
 scanf("%f", &transportation);
 printf("How much do you try to save monthly?:");
 scanf("%f", &savings);
 spending = rent+utilities+groceries+transportation;
 savings = income * .2;
 printf("Your monthly income is $%.2f\n",income);
 total = income-savings-spending;
 printf("Your monthly savings is $%.2f\n",savings);
 printf("Your monthly total is $%.2f\n",total);
 printf("Your monthly spending is $%.2f\n",spending);
 prent=rent/income*100;
 putilities=utilities/income*100;
 pgroceries=groceries/income*100;
 ptransportation=transportation/income*100;
 psavings=savings/income*100;
 pspending=spending/income*100;
 printf("Your expenses are %.1f%% of your income\n",pspending);
 printf("Your rent is %.1f%% of your income\n",prent);
 printf("Your utilities payment is %.1f%% of your income\n",putilities);
 printf("Your grocery spending is %.1f%% of your income\n",pgroceries);
 printf("Your transportation fees is %.1f%% of your income\n",ptransportation);
 printf("Your savings is %.1f%% of your income\n",psavings);
  

    return 0;
}