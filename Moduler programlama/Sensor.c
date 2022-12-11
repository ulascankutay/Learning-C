#include "Sensor.h"	
#include <stdint.h>

int32_t temp_val[10]={12,35,65,96,35,62,24,12,32,31};

void sensor_init(void)
{

	
	printf("sensor INIT \n");
	
}



int32_t sensor_get_temp_value(void)
 {
	static int32_t sayac= 0; 
	int32_t temp= 0; 
	
	temp=temp_val[sayac];
	sayac++;

	if(10==sayac)
	{
	sayac=0;
	}
	
	return temp;

 }
