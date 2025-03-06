#include <stdio.h>


int main(void){
char family[][20] ={"Mary", "Sue", "Ben", "David", "Alice", "Sarah", "Donnely"};
int mlength = sizeof(family)/sizeof(family[0]);
int m = 0;
while(m<mlength){
    printf("Hello %s Nelson.\n", family[m]);
    m++;
}
    return 0;
}