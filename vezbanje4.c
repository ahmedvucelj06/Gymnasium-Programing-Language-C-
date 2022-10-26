#include<stdio.h>

int main()
{
	int i,j,m,n,max;
	
	printf("Duzina i sirina matrice: ");
	scanf("%d %d", &n, &m);
	
	int niz[n][m];
	int niz1[m];
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
		printf("Unesite elemente [%d][%d]: ",i,j);
		scanf("%d", niz[i][j]);
		printf("\n");
	}
	max = 0;
	} 
		for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (max<niz[i][j])
			max=niz[i][j];
		}
		max = 0;
		niz1[i]=max;
		
		printf("Najveci element [%d] u redu je [%d]", i+n,max);
		printf("1d niz sa max vrednostima 2d niza je %d", niz1);
		
		
}
return 0;
}
