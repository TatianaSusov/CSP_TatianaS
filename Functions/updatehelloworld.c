//Tatiana Susov, Update Hello World C
#include <stdio.h>

char hello(char name[]){
   printf("Hello %s\n", name);
   return 0;
}

int main(void){
 hello("Martha");
 hello("Everett");
 hello("Bryson");
 hello("Sandy");
 hello("Paige");

    return 0;
}