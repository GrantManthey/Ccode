#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;


printf("please enter an imput for a : \n");
scanf("%f", &a);

printf("please enter an imput for b : \n");
scanf("%f",&b);

printf("please enter an imput for c : \n");
scanf("%f",&c);

d = -b;
e = b*b;
f = 4*(a*c);
g = e - f;
h = sqrt(g);
i = h/(2*a);
j = d + i ;
k = d - i;
l = abs(g);
m = sqrt(l);
n = -m/(2*a);
o = d + n;
p = d - n;

 if (g < 0) {
    printf(" the first answer is %f'imaginary'\n",o);
    printf("the second answer is %f'imaginary'\n",p);
}  else {
   printf(" the first answer 'real' is : %f 'real'\n",j);
    printf("the second answer 'real' is : %f 'real'\n",k);
}
printf("a is %f: \n",a);
printf("b is %f: \n",b);
printf("c is %f: \n",c);
printf("d is %f: \n",d);
printf("e is %f: \n",e);
printf("f is %f: \n",f);
printf("g is %f: \n",g);
printf("h is %f: \n",h);
printf("i is %f: \n",i);
printf("j is %f: \n",j);
printf("k is %f: \n",k);
printf("l is %f: \n",l);
printf("m is %f: \n",m);
printf("n is %f: \n",n);
printf("o is %f: \n",o);
printf("p is %f: \n",p);
return 0;
}
