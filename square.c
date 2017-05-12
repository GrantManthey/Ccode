#include <stdio.h>
#include <math.h>

int main(){
float a,b,c,d,e;


printf("please enter an imput for a : \n");
scanf("%f", &a);

printf("please enter an imput for b : \n");
scanf("%f",&b);

printf("please enter an imput for c : \n");
scanf("%f",&c);

d = a + b + c;
printf("a + b + c = %f \n", d);
e = sqrt (d);
printf("the square root of a + b + c is %f \n",e);
return 0;
}
