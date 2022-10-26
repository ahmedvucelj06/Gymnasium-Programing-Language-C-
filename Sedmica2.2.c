#include<stdio.h>
#include<math.h>
#
int main()
{
	float r,Pi, o;
	
	printf("Unesite vrednost poluprecnika r:");
	scanf("%f", &r);
	printf("\n");
	
	Pi = 3.14;
	
	o = 2 * r * Pi;
	
	printf("Rezultat je : %.1f",o);
	
	return 0;
}
