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


  
