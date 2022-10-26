#include<stdio.h>

int provera(int niz)
{
	int zbir=0;
	int j,m;
	for(j=0;j<10;j++)
	{
		if (niz==j)
		{
			printf("Unesite znak jeste cifra: ");
			scanf("%d", &m);
			zbir++;
			break;
		}
	}
	return zbir;
}
int main()
{
	int n,i,zbir=0;
	
	printf("Unesite broj znakova: ");
	scanf("%d", &n);
	
	unsigned niz[n];
	for(i=0;i<n;i++)
	{
		printf("Unesite elemente: ");
		scanf("%d", &niz[i]);
		zbir+=provera(niz[i]);
	}
	printf("%d", zbir);
	
	return 0;
}
