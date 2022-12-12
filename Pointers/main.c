#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {



	int deg = 0 ;
	int *pdeg ; // pointer tanýmlama 
	
	deg=10 ; 
    pdeg=&deg; // &deg degerin adresini pdege ata

printf("ilk deger  %d\n",deg);	
	
	*pdeg = 20; //pointerýn gosterdiði deðiske 20'yi ata 
	
printf("son deger %d\n",deg);
printf("pointer %d\n",pdeg);	// pointer içindeki adress
printf("pointer gosterdigi adresteki degerr %d\n",*pdeg); // pointerýn gösterdiði adresteki deger 

       


	return 0;
}
