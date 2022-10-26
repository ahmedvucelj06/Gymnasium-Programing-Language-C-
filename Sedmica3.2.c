#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, p, o, v;
	
	printf("Unesite vrednosti a:");
	scanf("%f", &a);
	
	printf("Unesite vrednosti b:");
	scanf("%f", &b);
	
	printf("Unesite vrednosti c:");
	scanf("%f", &c);
	
	p = (2) * (a * b + a * c + b * c);
	printf("Povrsina je : %2.f \n", p);
	
	o = (a * a + b * b + c * c);
	printf("Obim je : %2.f \n", o);
	
	v = (a * b * c);
	printf("Zapremina je : %2.f \n", v);
	
	return 0;
}
