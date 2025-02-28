//Tatiana Susov, greet with time of day C
#include <stdio.h>
#include <time.h>

int main(void){
 
  time_t now = time(NULL);
     struct tm * tm_struct = localtime(&now);
     int hour = tm_struct->tm_hour;
     printf("%d", hour);

     if(hour >= 0 && hour < 12){
        printf("\nGood morning!");
     }else if (hour >= 16 && hour <= 18){
        printf("Good afternoon!");
     }else{
        printf("Good evening!");
     }
    return 0;
}