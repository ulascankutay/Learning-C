#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define BOYUT 5

	struct oto{
		
		float motor;
		int renk;
		char model ;
		int vites ;
	}oto3;
    
    typedef struct otoden{ // KEND� T�P�N� TANIMLAMA 
		
		float motor;
		int renk;
		char model ;
		int vites ;
	}oto_t; // TANIMLANAN STRUCTI oto_t OLARAK �A�IRMA
    	
int main(int argc, char *argv[]) {
	
	
	struct oto oto1={.renk=5, .model='a', .vites=5, .motor=1.6 };

	struct oto oto2 ={1.3,3,'Q',6};
	
	struct oto *poto2; // ��ARET�� TANIMLAMA
     
    struct oto oto4[BOYUT]  ; // ET�KET 
	
	oto2.renk = 2 ;
	oto3.model ='S';// OTOMOT�K TANIMLAMA

	poto2 = &oto2;
	poto2->model = 'd';	
      
    oto4[0].model;// D�Z� TANIMLAMA
  	
    oto_t oto6 ; // BEL�RL� �FADELERE  TAKMA AD TAMIMLAMA G�B�   
  	
  	
  	
  	
	return 0;
}
