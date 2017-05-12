#include <stdio.h> /* lets us do anything*/
#include <math.h> /* lets us do math */
int main(void) /*starts the function */
{
	/*setting up variables */
   float a,b,c,x; /* designates "a" "b" "c" and "x" as float values */
   int z;
   a = 3; /* designates "a" as being equal to 3*/
   b = 3; /* designates "b" as being equal to 3*/
   c = 3; /* designates "c" as being equal to 3*/
   x = a + b + c; /* designates x as being equal to the sum of a+b+c*/
   
    /*prints some garbage */
 printf("\t meow\n"); /*prints the word "meow" then \n makes a line break, the \t command makes an indent as if you had pressed tab */
 printf("x = %f", x); /*prints the placeholder %f which designates a float variable. the "x" after the comma shows that the placeholder is going to be replaced by X */
 printf("\n"); /*enters a page break */

  /*imputing imputs */
 printf("Please enter an imput \n"); /*prints out text */
 scanf("%d", &z); /*whatever number you imput will be set as "z" */
 printf("You entered: %d\n", z); /*prints text followd by "z" */
 
return 0; /* clears everything */
} /*end the function */

