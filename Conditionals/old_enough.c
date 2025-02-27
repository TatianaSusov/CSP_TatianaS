//Tatiana Susov, Old Enough C Practice
#include <stdio.h>

int num;

int main(void){
    
    printf("Hello, welcome to my program.\n This program will tell you if you are old enough to have certain opportunities.\n");
    printf("%d How old are you ?\n", num);
    scanf("%d", &num);
    printf("You are %d.\n", num);
    if(num > 3 && num < 15 ){
        printf("You are old enough to attend school!\n");
    }else if(num == 15){
        printf("You are old enough to get a learners permit!\n");
    }else if(num == 16 || num == 17){
        printf("You are old enough to drive!\n");
    }else if(num > 17){
        printf("You are old enough to vote!\n");
    }else{
        printf("You are not old enough to have these certain opportunities.");
    }
    return 0;
}