//Tatiana Susov, FizzBuzz C
#include <stdio.h>


int main(void){
   int i=0;
    while(i<=50){
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
        }else if(i % 3 == 0){
            printf("Fizz\n");
        }else if(i % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", i);
        }
        
        i++;
    }

    
    return 0;
}