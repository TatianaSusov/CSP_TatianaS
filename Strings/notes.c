//Tatiana Susov, String Notes C
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
 // printf("Please tell me your full name:");
 // fgets(name, 20, stdin);
 // printf("Hello %s, welcome to my program", name);
 // char sentence[] = "The quick brown fox jumps over the lazy dog";
  //printf("%s\n", sentence);
 // printf("%lu\n", sizeof(sentence));
 //printf("%d\n", strlen(sentence));
 char one [] = "Hello ";
 char two [] = "World!";
char three[ ] = "This is my program.";
//two[5] = '?';
printf ("%s\n", one);
strcat(one, two);
printf ("%s\n", one);
strcat(three, one);
printf ("%s\n", three);
 //printf("%s\n", one);
    return 0;
}



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
  
