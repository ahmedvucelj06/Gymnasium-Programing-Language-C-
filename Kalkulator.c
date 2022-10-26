#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	double broj1;
	double broj2;
	char funkcija;

	printf("\t______________________________\t \n");
	printf("\t\t Kalkulator 1.0\n\n");
	
	printf("\tUnesite broj: ");
	scanf("%lf", &broj1);
	printf("\tUnesite funkciju koju zelite: ");
	scanf(" %c", &funkcija);
	printf("\tUnesite drugi broj: ");
	scanf("%lf", &broj2);
	
	if (funkcija == '+')
	{
		printf("\t______________________________\t \n");
		printf("\t\t Resenje\n\n");
		printf("\t\t%.2f\n", broj1 + broj2);
	}
	else if (funkcija == '-')
	{
			printf("\t______________________________\t \n");
			printf("\t\t Resenje\n\n");
		printf("\t\t%.2f\n", broj1 - broj2);
	}
	
	else if (funkcija == '/')
	{
			printf("\t______________________________\t \n");
			printf("\t\t Resenje\n\n");
		printf("\t\t%.2f\n", broj1 / broj2);
	}
	
	else if (funkcija == '*')
	{
			printf("\t______________________________\t \n");
			printf("\t\t Resenje\n\n");
		printf("\t\t%.2f\n", broj1 * broj2);
	}
	
	else 
	{
			printf("\t______________________________\t \n");
			printf("\t\t Error\n\n");
		printf("\tFunkicja nije pronadjena\n");
	}
	
	printf("\t______________________________\t \n");
	

	return 0;
}
