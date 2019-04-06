#include <stdio.h>

/* Print the table of Fahrenheit to Celsius in rerverse order 
 * from 300 degrees to 0. */

int main(){
	
	int fahr;

	char Fahr[20] = "Fahrenheit";
	char Celsius[20] = "Celsius";

	printf("%s    %s \n", Fahr, Celsius);
	
	for (fahr = 300; fahr >= 0; fahr++){
		
		printf("%4.0d %14.1f \n", fahr , ((5.0/9.0) * (fahr - 32.0)));
		fahr -= 20;
	}
}
				
