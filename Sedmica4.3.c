#include<stdio.h>
#include<math.h>

int main()
{
	float kmh, ms;
	
	printf("Unesite vrednosti kmh:");
	scanf("%f", &kmh);
	
	ms = kmh / 3.6;
	
	printf("Brzina je jednaka : %.2f", ms);
	printf("ms");
	
	return 0;
}
