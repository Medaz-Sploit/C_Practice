#include <stdio.h>

#define LOWER 0      /* lower limit of the table */
#define UPPER 300    /* upper limit of the table */
#define STEP 20      /* step size */

/* Print the table of Fahrenheit to Celsius in rerverse order 
 * from 300 degrees to 0. */

int main(){
	
	int fahr;

	char Fahr[20] = "Fahrenheit";
	char Celsius[20] = "Celsius";

	printf("%s    %s \n", Fahr, Celsius);
	
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
		
		printf("%4d %14.1f \n", fahr , ((5.0/9.0) * (fahr - 32.0)));

	}
}
				
