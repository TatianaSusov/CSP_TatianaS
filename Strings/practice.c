//Tatiana Susov, Name Decorator, C
#include <stdio.h>
#include <string.h>

int main(void){
 
  char phrase [] = "here is your name decorated!";
  char name [73453];
  char d_1 [] = "---";
  char d_2 [] = "---";
  printf("Welcome to the name decorator! What is your first name?");
  scanf("%s", name);
  printf("%s", phrase);
  strcat(d_1, name);
  strcat(name, d_2);
  printf("%s", name);
  printf("%s\n", d_1); printf("%s\n",d_2);
  
  

  

    return 0;
}