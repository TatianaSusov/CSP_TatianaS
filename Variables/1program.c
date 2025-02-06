// Tatiana Susov, C first program
#include <stdio.h>


int main()
{
    char name[421345];
    char question [] = "This is all my program can do right now.";
  printf("what's your name?");
  scanf("%s", name);
  printf("%s, hello.", name);
  printf("%s", question);
    return 0;
}