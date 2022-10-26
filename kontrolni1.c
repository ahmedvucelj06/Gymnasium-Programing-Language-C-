#include<stdio.h>

float stepen(float broj, int stepen)
{
	int i;
	float rez=1;
	
	for (i=0;i<stepen;i++)
	{
		rez*=broj;
	}
	return rez;
}
int main()
{
	float x, rezultat;
	
	printf("Unesite realan broj x: ");
	scanf("%f", &x);
	
	rezultat=stepen(x,3)-8*stepen(x,3)+12*stepen(x,4);
	
	printf("Rezultat je %.2f\n", rezultat);
	
	return 0;
}
