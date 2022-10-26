#include<stdio.h>
#include<math.h>

int main()
{
	float Pi, p, r, o;
	
    
    printf("Unesite vrednosti r:");
    scanf("%f", &r);
    printf("\n");
    
    Pi = 3.14;
	p = r * r * Pi;
    o = 2 * r * Pi;
    
    printf("Vrednost Obima je : %.1f", o);
    printf("\n");
    printf("Vrednost Povrsine je : %.1f", p);
    
    return 0;
}
