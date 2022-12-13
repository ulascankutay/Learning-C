#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	struct oto{
		
		float motor;
		int renk;
		char model ;
		int vites ;
	}oto3;
	
int main(int argc, char *argv[]) {
	
	
	struct oto oto1={.renk=5, .model='a', .vites=5, .motor=1.6 };

	struct oto oto2 ={1.3,3,'Q',6};
	
	
	oto2.renk = 2 ;
	oto3.model ='S';
	
	
	return 0;
}
