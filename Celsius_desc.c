#include <stdio.h>

/* Print the table of Celsius to Fahrenheit in Reverse Order 
 * from 300 to 0 degrees. */

int main(){

	int celsius;
	char Celsius[20] = "Celsius";
	char Fahr[20] = "Fahr";

	printf("%s       %s\n", Celsius, Fahr);

	for(celsius = 300; celsius >= 0; celsius -= 20){
		
		printf("%4d %14.1f \n", celsius, ((celsius / (5.0/9.0)) + 32.0));
	}
}
		

