#include<stdio.h>
#include<stdlib.h>


int main()
{
	int racun,resto,kartica1,placanje,pin,potvrda,garnitura3,da;
	
	printf("Dobrodosli na website najbolje robne kuce u gradu.\n");
	printf("\n");
	printf("Na stanju nam je ostala prelepa garnitura, da li zelite da je stavimo u korpu? ");
	printf("\n");
	printf("\n");
    printf("Da li zelite da potvrdite? ");
    scanf("%i", &da);
	printf("\n");

    kartica1 = 12000;
    garnitura3 = 5000;
    
	if (garnitura3)
	{
		printf("Dodali ste garnituru u vasu online korpu\n");
		racun = garnitura3 + racun;
		printf("Trenutno vas racun iznosi %i dinara\n", racun);
		printf("\n");
	}
	
	else 
	{
		printf("Niste potvrdili, tranzakcija je onemogucena");
	}
    

   printf("Kako bi zavrsili porudzbinu unesite pin vase kartice");
   printf("\n");
   printf("\n");
	

	printf("Molimo vas da unesete vas pin : ");
	scanf("%i",&pin);
	
	printf("\n");
	
    if (pin == 888)
	{
		printf("Pin je tacan, pristup banci je odobren");
		
		if (kartica1 > racun)
	printf("\n");
	printf("Uspesno ste kupili garnituru za samo 5000 dinara ");
	printf("\n");
	placanje = kartica1 - racun;
	printf("Trenutno stanje na racunu vam je %i", placanje );
	}
	
	else printf("Error - Pogresan pin, pristup banci nije odobren. Tranzakcija je prekinuta");
	
	
    
	return 0;
}
