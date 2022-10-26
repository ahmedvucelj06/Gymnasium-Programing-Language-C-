#include<stdio.h>
int main()
{
	int i,j,n,m,b;
	
	printf("Unesite duzinu i sirinu matrice: ");
	scanf("%d %d", &n, &m);
	
	int niz[n][m];
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Unesite vrednosti niza: ");
			scanf("%d", &niz[i]);
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(niz[j]<niz[i])
			{
			    b=niz[i];
				niz[i]=niz[j];
				niz[j]=b;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d", niz[i]);
	}
	return 0;
}
