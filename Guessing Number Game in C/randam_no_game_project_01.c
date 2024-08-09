#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,guess,n_guesses;
	srand(time(0));
	num=rand()%100+1;
	printf("Welcome to number Guesing game\n I am thinking a number in between the 1 to 100\n");
	
	do{
		printf("Enter your guess:\n");
		scanf ("%d",&guess);
	
		if (guess>num)
		{
			printf("lower number please !\n");
		}
		else if(guess<num)
		{
			printf("higher number please !\n");
		}
		else
		{
			printf("----Congrats--->:) \n ");
			printf("you guessed the number in %d attempts",n_guesses);
		}
		n_guesses++;
	}while(guess!=num);
	return 0;
}