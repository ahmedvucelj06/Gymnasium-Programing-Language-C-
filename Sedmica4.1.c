#include<stdio.h>
#include<math.h>

int main()
{
	float x, a;
	
	printf("Unesite vrednosti x:");
	scanf("%f", &x);
	
	printf("Unesite vrednosti a:");
	scanf("%f", &a);
	
	printf("Dvostruko prvi broj je: %.1f \n", 2 * x);
	printf("Trecina broja je : %1.f", a / 3);
	
	return 0;
	
}
