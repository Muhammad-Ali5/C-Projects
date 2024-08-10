#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	float salary;
}emp[100];
int n;
void add(struct employee emp[]);
void search(struct employee emp[]);
void show(struct employee emp[]);
void delete_detail(struct employee emp[]);
//void exit();

int main()
{
//	while(1){
	int i;
	printf("\t\t||===Enter the no. employees===||\n\n");
	scanf("%d",&n);
	printf("==============================\n");
	printf("Enter the Employee Record \n");
	printf("==============================\n");
	for(i=0; i<n; i++)
	{
		printf("\nEnter %d Employe id :",i+1);
		scanf("%d",&emp[i].id);
		printf("Enter employee name :");
		fflush(stdin);
		gets(emp[i].name);
		printf("Enter employee salary :");
		scanf("%f",&emp[i].salary);
	}
//	start:
	printf("\n\n-------OPERATION-------\n");
	printf("1. Add an Employee\n");
	printf("2. Search an Employee \n");
	printf("3. Show all Employees \n");
	printf("4. Delete an Employee details \n");
	printf("5. Exit the Program \n");
	int input;
	printf("\t\n----ENTER YOUR CHOICE----\n");
	printf("==============================\n");
	scanf("%d",&input);
	
	switch(input)
	{
		case 1:
			add(emp);
			break;
		case 2:
			search(emp);
			break;
		case 3:
			show(emp);
			break;		
		case 4:
			delete_detail(emp);
		default :
			exit(0);		
	}
//	goto start:
	return 0;		
 }
//}
void show(struct employee emp[])
{
	int i;
		printf("ID\tNAME\tSALARY\n");
		printf("-------------------------------\n");
	for(i=0; i<n; i++)
	{
//		printf("-------------------------------\n");
		printf("\n%d\t%s\t%.2f\n",emp[i].id,emp[i].name,emp[i].salary);
	}
}
void add(struct employee emp[])
{
		printf("----Enter new Employee detail----\n");
		printf("==============================\n");
	printf("Enter employee id : ");
	scanf("%d",&emp[n].id);
	printf("Enter employee name : ");
	fflush(stdin);
	gets(emp[n].name);
	printf("Enter employee salary : ");
	scanf("%f",emp[n].salary);
	printf("-ADD SUCCESSFULL-");
	n++;
	
}

void delete_detail(struct employee emp[])
{
	int temp,i,j,count=0;
	printf("Enter ID to be deleted ! ");
	scanf("%d",&temp);
	for(i=0; i<n; i++)
	{
		if(temp==emp[i].id)
		{
			temp=i;      // temp--> id of the employe and temp=i---> now we assign the index of i to temp .
			count++;
		}
	}
	if (count==1)
	{
		for(j=temp; j<n; j++)
		{
			emp[j]=emp[j+1];
		}
	}
	else
	{
		printf("Oops! Employee is not exists ");
	}		
}

void search(struct employee emp[])
{
	int sch,count=0,i;
	printf("Enter ID to be searched !\n");
	scanf("%d",&sch);
	for(i=0; i<n; i++)
	{
		if(sch==emp[i].id)
		{
//			sch=i;  
			printf("\n Employee Found \n\n");   
			printf(" NAME : %s\n",emp[i].name);
			printf(" ID : %d\n",emp[i].id);
			printf(" SALARY : %f\n",emp[i].salary);
			count++;
		}
	}
	if(count!=1)
	{
		printf("Employee Not Found \n");
	}
}