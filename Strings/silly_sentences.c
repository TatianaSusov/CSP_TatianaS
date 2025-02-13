//Tatiana Susov, Silly Sentences, C
#include <stdio.h>
//String variables for my user inputs (minimum of 3)
 char animal[943287];
 char verb[57984203];
 char place[5793454];
 char feeling[57439857];
 char noun[9852340];
int main(void){
    //introduce user to program... tell them what is happening (print statement)
    printf("Hello user and welcome to the crazy fantastic amazing bizarre mad lib program, lets make a mad lib together!");
// create user inputs (print statements with questions AND scanf to collect the info)(same as the number of variables)
 printf("\nPlease input a random animal.");
 scanf("%s", animal );
 printf("\nNow input a past tense verb");
 scanf("%s", verb );
 printf("\nNow, input a place of your choice");
 scanf("%s", place );
 printf("\nNow input a feeling.");
 scanf("%s", feeling);
 printf("\nLast but not least, please input a noun.");
 scanf("%s", noun );
 printf("\nHere is your mad lib!");
 printf("%s\n The ");
 printf("%s", animal );
 printf("%s", verb );
 printf("all the way to ", place );
// insert variables into the sentence to show the user (print statement, only 1) example: "hello %s", name

    return 0;
}