//Tatiana Susov, Variables Practice
//your name
//a number between 1 and 10
//a number between 100 and 1000
//what you had for breakfast 
//your favorite color
//the school name
//the year
//your eye color
//your age
//your favorite subject in school 
#include <stdio.h>

char name [] = "Tatiana";
int num = 7;
float numm =504.75;
char breakfast [] =  "breakfast burrito";
char color [] = "green";
char school [] = "ucas";
int year = 2025;
char eye [] = "hazel";
int age = 15;
char subject [] = "all";



int main(void){
  printf("Hello world");
  printf("Tatiana");
  printf("%d\n",num);
printf("%f\n", numm); 
printf("%s", breakfast);
printf("%s", color);
printf("%s", school);
printf("%d\n", year);
printf("%s", eye);
printf("%d", age);
printf("%s", subject);
   return 0;
}