#include<stdio.h>

int zbircifaraveciodn(int x, int n)
{
	int zbir = 0;
	while(x>0)
	{
		zbir+=x%10;
		x=x/10;
	}
	return zbir>n;
}
int main()
{
	int i;
	
	printf("Trocifreni brojevi ciji je zbir veci od 20: \n");
	for(i=100;i<=999;i++)
	{
		if(zbircifaraveciodn(i,20))
		{
			printf("Broj: %d \n", i);
		}
	}
	return 0;
}
