#include<stdio.h>

int main(){

   float A,B,C,MED;

   scanf("%f %f %f",&A,&B,&C);

   MED=((A*2)+(B*3)+(C*5))/(2+3+5);

   printf("MEDIA = %.1f\n",MED);

   return 0;

}