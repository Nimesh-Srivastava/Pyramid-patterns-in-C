#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0,j=0,k=0,num;
	clrscr();
	printf("\nEnter the rows : ");
	scanf("%d",&num);
	printf("\n");
	while(i<num)
	{
		while(j<=i)
		{
			printf("* ");
			j++;
		}
		j=0;
		printf("\n");
		i++;
	}
	printf("_______________\n\n");
	i=num;
	while(i>0)
	{
		j=i;
		while(j>0)
		{
			printf("* ");
			j--;
		}
		printf("\n");
		i--;
	}
	printf("_____________\n\n");
	i=1;
	while(i<=num)
	{
		j=1;
		while(j<=num-i)
		{
			printf(" ");
			j++;
		}
		while(k!=2*i-1)
		{
			printf("*");
			k++;
		}
		k=0;
		printf("\n");
		i++;
	}
	printf("_____________\n\n");
	getch();
	return 0;
}