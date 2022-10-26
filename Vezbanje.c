#include<stdio.h>

int main()
{
	int m,n;
	printf("Unesite duzinu i sirinu matrice: ");
	scanf("%d %d", &m, &n);
	
	int niz[m][n],i,j;
	
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Unesite niz[%d][%d]",i,j);
			scanf("%d", &niz[i][j]);
		}
		printf("\n");
	}
	printf("Unesite 2d matrica: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			printf("%d", niz[i][j]);
			else if(i == j)
			printf("\n");
		}
		printf("Brojevi koji su se nalazili na glavnoj dijagonali su: ");
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			printf("%d", niz[i][j]);
		}
	}
	return 0;
}
