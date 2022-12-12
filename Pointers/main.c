#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {



	int deg = 0 ;
	int *pdeg ; // pointer tanımlama 
	
	deg=10 ; 
    pdeg=&deg; // &deg degerin adresini pdege ata

printf("ilk deger  %d\n",deg);	
	
	*pdeg = 20; //pointerın gosterdiği değiske 20'yi ata 
	
printf("son deger %d\n",deg);
printf("pointer %d\n",pdeg);	// pointer içindeki adress
printf("pointer gosterdigi adresteki degerr %d\n",*pdeg); // pointerın gösterdiği adresteki deger 

       
unsigned int num= 0xAB123478;
unsigned char *pnum;
unsigned char bytes[4];

pnum=&num;


bytes[0]= *pnum;
bytes[1]= *(pnum+1);
bytes[2]= *(pnum+2);
bytes[3]= *(pnum+3);
  
  
  
printf("\n byte1 : %x byte2 : %x byte3 : %x byte4 : %x ",bytes[0] ,bytes[1],bytes[2],bytes[3]);

	return 0;
}
