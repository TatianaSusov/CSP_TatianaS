//Tatiana Susov, Function Notes in C
#include <stdio.h>

void add(int numOne, int numTwo){
   printf("%d\n", numOne+numTwo);
   
}
char input(char type[20]){
    char answer [50];
    printf("Please give me a %s:\n", type)
    scanf("%s", answer);
    return answer;
}


int main(void){
  //printf("Hello world\n");
  //add(1000,2);
  //add(4,9);
  //add(47,9);
  
  
  
  printf("%s was %s until they somehow reached %s",input("name"),input("verb"),input("place"));
    return 0;
}