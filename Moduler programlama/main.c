#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "Motor.h"
#include "Sensor.h"
#include "Display.h"
void delay(void);

 int main(int argc,char *argv[]){
 	
	
 	// bir seferlik çalýþacak 
	// baþlama
	int32_t temp = 0 ;	   
	display_init();
	motor_init();
	sensor_init();
    display_power_On();  	
      	
      	while(1)
		{
      		temp = sensor_get_temp_value();
      		display_write_to_screen(temp);
      	
		  
		  
		  if(temp>25)
		  {
		  	motor_on();
		  	
		  }
		  else
		  {
		  	motor_of();
		  }
		  delay();
		  delay();
		  delay();
		}
 	
 	
 	
 return 0 ;	
 }
 void delay(){
 	
 	int64_t t = 0 ;
 	for(t=0; t<400000000;t++ ){
 		
	 }
 }
 
 
 
 
 
