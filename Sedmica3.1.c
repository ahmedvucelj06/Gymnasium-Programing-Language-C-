#include<math.h>
#include<stdio.h>

int main()
{
	float a,b,as,as2;
	
	printf("Unesite vrednosti a:");
	scanf("%f", &a);
	
	printf("Unesite vrednosti b:");
	scanf("%f", &b);
	
	as = a +b;
	as2 = as / 2;
	
	printf("Aritmeticka sredina ova dva broja je : %1.f", as2);
	
	return 0;
}
