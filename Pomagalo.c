#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int  lozinka;
	char  opcija[100], pitanje[1000];
	float  ;
	double  ;
	printf("\t\t\t\tLozinka je Tacna!\n\n");
		
	printf("\t\t________________________________________________________________\n\n");
	
	printf("\t\t\t\t _________________________ \n");
	printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Connections          |\n");
	printf("\t\t\t\t|   ________________     |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|   Sound                |\n");
	printf("\t\t\t\t|   Display              |\n");
	printf("\t\t\t\t|   Personal Information |\n");
	printf("\t\t\t\t|   Lock Screen          |\n");
	printf("\t\t\t\t|   _________________    |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|   Personal Assistant   |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t(___     ___( )___    ___)\n"); 
	printf("\t\t\t\t(________________________)\n\n"); 
	
	printf("\t\t________________________________________________________________\n\n\n");
	
	printf("\t\t\tIzaberite koju opciju zelite: ");
	scanf("%[^\n]", &opcija);
	
	printf("\n\n");
	
	if(strcmp(opcija, "Connections") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\t\t\tTrenutno ste povezani na 'Gimnazija' internet\n");
		//205.92.85.251
		printf("\t\t\t\tIP Adressa je 205.92.85.251.\n\n");
		printf("\t\t_____________________________________________________________\n\n");
	}
	
	if(strcmp(opcija, "Sound") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\t\t\t\tJacina tona je trenutno 50%\n");
		printf("\t\t\t\tSound Mode je On\n");
		printf("\t\t_____________________________________________________________\n\n");
	}
	
	if(strcmp(opcija, "Display") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\t\t\t\tBrightness je trenutno 50%\n");
		printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
		printf("\t\t_____________________________________________________________\n\n");
	}
	
		if(strcmp(opcija, "Lock Screen") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");

	printf("\t\t\t\t _________________________ \n");
	printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|        Password        |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|      1    2    3       |\n");
	printf("\t\t\t\t|      4    5    6       |\n");
	printf("\t\t\t\t|      7    8    9       |\n");
	printf("\t\t\t\t|           0            |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|  Unesite Vas Password  |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t|                        |\n");
	printf("\t\t\t\t(___     ___( )___    ___)\n"); 
	printf("\t\t\t\t(________________________)\n\n"); 
	printf("\t\t\t\tUnesite Vas Password: ");
	scanf("%i", &lozinka);
	
		printf("\t\t________________________________________________________________\n\n\n");
	
	if ( lozinka == 2005 )
	{
		printf("\t\t\t\tLozinka je Tacna!\n\n");
		printf("\t\t\tYou need to update your device to use this function\n");
	}
	
	else
	{
	printf("\t\t\t\t ______________________ \n");
	printf("\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|   -Settings Locked-   |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|       Uneli ste       |\n");
	printf("\t\t\t\t|    pogresnu lozinku.  |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t|                       |\n");
	printf("\t\t\t\t(___    ___( )___    ___)\n"); 
	printf("\t\t\t\t(_______________________)\n"); 
	}
	
	printf("\t\t________________________________________________________________\n\n\n");
	
	
	}
	
	if(strcmp(opcija, "Personal Information") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");
		
		printf("\t\t\tModel vaseg telefona je iPhone X\n");
		printf("\t\t\tVas telefon je proizveden November 3, 2017\n");
		printf("\t\t\tVas provider je 'Telenor'\n");
		printf("\t\t\tVas broj telefona je +381 062123123\n");
		printf("\t\t_____________________________________________________________\n\n");
		
	}

	
		if(strcmp(opcija, "Personal Assistant") == 0)
	{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\tHello, i'm your Personal Assistant. How can i help you. I'm little bussy right now.\n");
		printf("\t\t\tBut i can answer this questions: Vreme, Model.\n");
		printf("\t\t\t\tUnesite vase pitanje: ");
		scanf("%[^\]", &pitanje);
		
		
		if(strcmp(pitanje, "Sound") == 0)
		{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\t\t\t\tJacina tona je trenutno 50%, Sound Mod je On");
		printf("\t\t_____________________________________________________________\n\n");
		}
		
		if(strcmp(pitanje, "Vreme") == 0)
		{
		printf("\t\t_____________________________________________________________\n\n");
		printf("\t\t\t\tTrenutno je 7*. Novi Pazar.");
		printf("\t\t_____________________________________________________________\n\n");
		}
	
	}
	return 0;
	}

