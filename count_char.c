#include <stdio.h>

/* this a program that count charcters */

int main(){  /* count characters in input */

	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
