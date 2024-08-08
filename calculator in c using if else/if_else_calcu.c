#include <stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("welcome to Muhammad Ali Project.\nDear select the method, which you want :\n");
	 
	 printf("\n1.Addition : +");
	 printf("\n2.Subtraction : -");
	 printf("\n3.Multiplication : *");
	 printf("\n4.division : /\n");
	 
	 scanf("%c",&ch);
	 if (ch=='+')
	 {
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a+b;
	 	printf("Your answer is =%d",c);
     }
	 else if (ch=='-')	
	 	{
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a-b;
	 	printf("Your answer is =%d",c);
	    }
	 else if(ch=='*')
	    {
	 	printf("Enter a two numbers =");
	 	scanf("%d %d",&a,&b);
	 	c = a*b;
	 	printf("Your answer is =%d",c);
	    }
	 else if(ch=='/')
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
