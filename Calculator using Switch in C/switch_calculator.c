#include <stdio.h>
int main()
{
	int a,b,c;
	int n;
	printf("welcome to Muhammad Ali Project.\nDear select the method,\n which you want :\n");
	 
	 printf("\nPress 1. For Addition : +");
	 printf("\nPress 2. For Subtraction : -");
	 printf("\nPress 3. For Multiplication : *");
	 printf("\nPress 4. For division : /\n");
	 
	 scanf("%d",&n);
	 if (n==1)
	 {
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a+b;
	 	printf("Your answer is =%d",c);
     }
	 else if (n==2)	
	 	{
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a-b;
	 	printf("Your answer is =%d",c);
	    }
	 else if(n=='3')
	    {
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a*b;
	 	printf("Your answer is =%d",c);
	    }
	 else if(n=='4')
	    {
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a/b;
	 	printf("Your answer is =%d",c);
	    }
	 else
	  	 { 
	  	     printf("Sorry This is not valid");
		 }
	 	
	 }
