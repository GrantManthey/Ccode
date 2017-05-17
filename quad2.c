#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float disc(float a, float b, float c);
float main(){
float a1,b1,a2,b2,a,b,c,d,absd,x1,x2;


printf("please enter an imput for a : \n");
scanf("%f", &a);

printf("please enter an imput for b : \n");
scanf("%f",&b);

printf("please enter an imput for c : \n");
scanf("%f",&c);

d=disc(a,b,c);

 if (d < 0) {
	 absd = abs(d);
	 a1 = (-1*b)/(2*a);
	 b1 = (sqrt(absd))/(2*a);
	 a2 =(-1*b)/(2*a);
	 b2 = -1 * (sqrt(absd))/(2*a);
    printf(" imaginary roots : %f,%f   %f,%f'\n",a1,b1,a2,b2);
}  else {
	x1 = ((-1*b) + (sqrt(d)))/(2*a);
	x2 = ((-1*b) - (sqrt(d)))/(2*a);
   printf(" real roots 'real' is : %f, %f'real'\n",x1, x2);
 
}
/* printf("a is %f: \n",a);
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
*/
}


 
float disc (float a, float b, float c){
        float d = (b*b)-(4*a*c);
        
        return d;
}

