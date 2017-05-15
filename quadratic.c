#include <stdio.h>
#include <math.h>

int main(){
float a,b,c,d,e,f,g,h,i,j,k;


printf("please enter an imput for a : \n");
scanf("%f", &a);

printf("please enter an imput for b : \n");
scanf("%f",&b);

printf("please enter an imput for c : \n");
scanf("%f",&c);

d = b*-1;
e = b*b;
f = 4*(a*c);
g = e - f;
h = sqrt(g);
i = h/(2*a);
j = d + i ;
k = d - i;

printf("d is %f: \n",d);
printf("e is %f: \n",e);
printf("f is %f: \n",f);
printf("g is %f: \n",g);
printf("h is %f: \n",h);
printf("i is %f: \n",i);
printf("answer 1 is %f: \n",j);
printf("answer 2 is %f: \n",k);

return 0;
}
