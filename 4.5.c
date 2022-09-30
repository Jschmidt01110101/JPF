#include <stdio.h>
#define TEMPS 10
main()
{
	float temperature[TEMPS];
	int counter;
	
	temperature[0]= 78.6;
	temperature[1]= 82.1;
	temperature[2]= 79.5;
	temperature[3]= 75.0;
	temperature[4]= 75.4;
	temperature[5]= 71.8;
	temperature[6]= 73.3;
	temperature[7]= 69.5;
	temperature[8]= 74.1;
	temperature[9]= 75.7;
	
	
	printf("Daily temperatures for the last %d days:\n", TEMPS);
	for (counter=0; counter<TEMPS; counter++)
		{ printf("%.1f \n", temperature[counter]); }
		
		return;	
	}
