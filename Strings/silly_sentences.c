//Tatiana Susov, Silly Sentences, C
#include <stdio.h>
//String variables for my user inputs (minimum of 3)
 char animal [943287];
 char verb [57984203];
 char place [5793454];
 char feeling [57439857];
 char noun [9852340];
 
int main(void){
   
 printf("Hello user and welcome to the crazy fantastic amazing bizarre mad lib program, lets make a mad lib together!");
 printf("\nPlease input a random animal (single word).");
 scanf("%s", animal );
 printf("\nNow input a past tense verb (single word) ");
 scanf("%s", verb );
 printf("\nNow, input a place of your choice (single word) ");
 scanf("%s", place );
 printf("\nNow input a feeling (single word). ");
 scanf("%s", feeling);
 printf("\nLast but not least, please input a noun (single word). ");
 scanf("%s", noun );
 printf("\nHere is your mad lib! "); 
 printf("\n The ");
 printf("%s", animal );
 printf(" ");
 printf("%s",verb );
 printf(" all the way to ");
 printf("%s", place);
 printf(" with a/an ");
 printf("%s", feeling);
 printf(" look on his face. Don't worry, he didn't forget his ");
 printf("%s", noun);
 printf(".");

    return 0;
}