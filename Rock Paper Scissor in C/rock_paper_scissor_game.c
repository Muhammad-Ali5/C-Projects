#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menu();
void setup();

int you, computer; // global declaration

int main()
{
	while(1)
	{
		system("cls");
		setup();
		makelogic();
//		getch();
	}
	return 0;
}

void setup()
{
//	while((computer=rand()%4)==0)
//       or
	start:
	computer=rand()%4;
	if(computer==0)
	{
		goto start;
	}
	you=menu();
}

int menu()
{
	int num;
	printf("Rock crushes Scissors,\nScissors cut Paper,\nPaper covers Rock");
	printf("\n\n\t---Welcome to Rock,Paper,and Scissor Game-:)---\n");
	printf("--------------------------------------------------");
	printf("\n\t 1. Select Rock ");
	printf("\n\t 2. Select Paper ");
	printf("\n\t 3. Select Scissor");
 	printf("\n\t 4. Exit \n");
 	printf("--------------------------------------------------");
	printf("\n\t Enter your chocice : \n ");	
	scanf("%d",&num);	
	return num;
}

void makelogic()
{
	switch(you)
	{
		case 1:                 //you=Rock
				if(computer==1)            // you=rock , computer=rock
		    	{
					printf("\nGame Draw:)");
					printf("\nYou=rock\ncomputer=rock");
				}  
				else if(computer==2)       // you=rock , computer=paper
				{
					printf("\nComputer win");
					printf("\nyou=rock\ncomputer=paper");
				} 
				else                     // you=rock , computer=scissor
				{
					printf("\nyou win");
					printf("\nyou=rock\ncomputer=scissor");
			    } 
				break;     
		case 2:              //you=Paper
				if(computer==1)            // you=paper , computer=rock
		    	{
					printf("\nYou win:)");
					printf("\nYou=paper\ncomputer=rock");
				}  
				else if(computer==2)       // you=paper , computer=paper
				{
					printf("\nGame Draw");
					printf("\nyou=paper\ncomputer=paper");
				} 
				else                     // you=paper , computer=scissor
				{
					printf("\ncomputer win");
					printf("\nyou=paper\ncomputer=scissor");
			    }  
				break; 
		case 3:           //you=scissor
			 
				if(computer==1)            // you=scissor , computer=rock
		    	{
					printf("\ncomputer win:)");
					printf("\nYou=scissor\ncomputer=rock");
				}  
				else if(computer==2)       // you=scissor , computer=paper
				{
					printf("\nyou win");
					printf("\nyou=scissor\ncomputer=paper");
				} 
				else                     // you=scissor , computer=scissor
				{
					printf("\nDraw Game:)");
					printf("\nyou=scissor\ncomputer=scissor");
			    }  
		case 4:
//			if(you==4){
				exit(0);
//			}
				break;
		default:
			printf("\nInvalid choice\n");		            
	}
}