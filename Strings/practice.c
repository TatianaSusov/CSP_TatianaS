//Tatiana Susov, Name Decorator, C
#include <stdio.h>
#include <string.h>


int main(void){
 
  char continued_welcome [] = "to the name decorator. Here is your name decorated!";
  char decoration_1 [] = "<<<";
   char name [45345];
  char decoration_other_1 [] = ">>>";
  char d_2 [] = "(((";
  char d_other_2 [] = ")))";
  char d_3 [] = "---";
  char d_other_3 [] = "---";
  printf("Welcome to the name decorator! What is your first name?");
  scanf("%s", name);
  printf("%s, Welcome ", name);
  printf("%s\n", continued_welcome);
  strcat(decoration_1, name);
  strcat(decoration_1, decoration_other_1);
  printf("%s\n", decoration_1);
  strcat(d_2, name);
  strcat(d_2, d_other_2);
  printf("%s\n", d_2);
  strcat(d_3, name);
  strcat(d_3, d_other_3);
  printf("%s\n", d_3);
  

    return 0;
}