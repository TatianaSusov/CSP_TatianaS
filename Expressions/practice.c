// Tatiana Susov, Expressions practice C


#include <stdio.h>
#include <math.h>

int num1 = 7-24/8*4+6;
int num2 = 18/3-7+2*5;
int num3 =6*4/12+72/8-9;
int num4 = (17-6/2)+4*3;
int num5 = -2*(1*4-2/2)+(6+2-3);
int num6 = -1*((3-4*7)/5)-2*24/6;
int num7 = (3* (int) pow(5,2)/15)-(5-(int)pow(-2,2));
int num8 = ((int)pow(1,4)*(int)pow(2,2)+(int)pow(3,3))-(int)pow(2,5)/4;
int num9 = ((int)pow(22/2-2*5,2))+((int)pow(4-6/6,2));

int main(void){
  printf("%d\n", num1);
  printf("%d\n", num2);
  printf("%d\n", num3);
  printf("%d\n", num4);
  printf("%d\n", num5);
  printf("%d\n", num6);
  printf("%d\n", num7);
  printf("%d\n", num8);
  printf("%d\n", num9);
    return 0;
}