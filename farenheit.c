#include <stdio.h>

/* Print Fahrenheit-Celsius table
 * for f = 0, 20, ..., 300   */

int main(){

	int lower, upper, step;
	float celsius, fahr;

	step = 20;
	lower = 0;
	upper = 300;

	fahr = lower;

	char fahr_string[20] = "Fahrenheit";
	char celsius_string[20] = "Celsius";

	printf("%s   %s \n", fahr_string, celsius_string);

	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr + 32);
		printf("%4.0f %14.1f\n", fahr, celsius);
		fahr = fahr + step ;
	}
}

