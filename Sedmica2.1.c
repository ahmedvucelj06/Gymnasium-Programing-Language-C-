#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,d;
	
	printf("Unesite vrednost a:");
	scanf("%f", &a);
	
	printf("Unesite vrednost b:");
	scanf("%f", &b);
	
	d = (a * a) + (b * b);
	
	printf("Poluprecnik praovugaonika je %.f", d);
	
	return 0;
	
	
	
}
