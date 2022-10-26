#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Unesi broj elemenata niza: ");
	scanf("%d", &n);
	
	int niz[n];
	
	for (i=0; i<n; i++)
	{
		printf("Unesite elemente niza: ");
		scanf("%d", &niz[i]);
	}
	
	int min=niz[0];
	
	for (i=1; i<n; i++)
	{
		if(niz[i]>min)
		{
			min=niz[i];
		}
	}
	
	printf("Najmanji je: [%d]", min);
	return 0;
}
