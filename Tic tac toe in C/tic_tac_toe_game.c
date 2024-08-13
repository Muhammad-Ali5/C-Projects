#include<stdio.h>
#include<conio.h>

void printboard();
int checkwin();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
	system("color 3a");
	int player=1,input,status=-1;
	char mark; //
	
	while(status==-1)
	{
		if(player%2==0)
		{
			player=2;
		}
		else
		{
			player=1;
		}
		if(player==1)                       //(player==1)? 'x': 'o';
	    {
		mark='X';
        }else
	   {
     	mark='O';
	   }                               
	printf("\nPlayer %d Enter the number  :\n",player);
	scanf("%d",&input);
	if(input<1 || input>9)
	{
		printf("Invalid Input ! ");
	}
	board[input]=mark;
	printboard();
	int result;
	result=checkwin();
	if(result==1)
	{
		printf("Player %d is Winner",player); 
		return 1;
	}
	else if(result==0)
	{
		printf("Draw");
		return 0;
	}
	player++;
		
	}
}
void printboard()
{
//	system("cls");
	printf("\n\n\n");
	printf("\t**** Tic_tac_teo****\n\n\n");
	printf("\t      |      |       \n");
    printf("\t  %c   |  %c   |  %c   \n",board[1],board[2],board[3]);
	printf("\t______|______|______ \n");
	printf("\t      |      |       \n");
	printf("\t  %c   |  %c   |  %c   \n",board[4],board[5],board[6]);
    printf("\t______|______|______ \n");
	printf("\t      |      |       \n");
	printf("\t  %c   |  %c   |  %c   \n",board[7],board[8],board[9]);
	printf("\t      |      |       \n");
}
int checkwin()
{
	if(board[1]==board[2] && board[2]==board[3])
	return 1;
	
	if(board[4]==board[5] && board[5]==board[6])
	return 1;
	
	if(board[7]==board[8] && board[8]==board[9])
	return 1;
	
	if(board[1]==board[4] && board[4]==board[7])
	return 1;
	
	if(board[2]==board[5] && board[5]==board[8])
	return 1;
	
	if(board[3]==board[6] && board[6]==board[9])
	return 1;
	
	if(board[1]==board[5] && board[5]==board[9])
	return 1;
	
	if(board[3]==board[5] && board[5]==board[7])
	return 1;
	
	int count;
	for(int i=1; i<=9; i++)
	{
		if(board[i]=='x' || board[i]=='o')
		{
			count++;
		}
	}
	if(count==9)
	{
		return 0;
    }
    return -1;
}
