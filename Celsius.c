#include <stdio.h>

/* Print table of Ceslsius to Fahrenheit 
 * for c = 0, 20, ...., 300 */

int main(){
	
	int step, lower, upper;
	float celsius, fahr;

	upper = 300;
	step = 20;
	lower = 0;

	celsius = lower;
	char Celsius[20] = "Celsius";
	char Fahr[20] = "Fahr";

	printf("%s      %s \n", Celsius, Fahr);

	while (celsius <= upper ){

		fahr = (celsius / (5.0/9.0)) + 32;
		printf("%4.0f %14.1f \n", celsius , fahr);
		celsius += step;
	}
}
