/*
 * Modify the temperature conversion program to print
 * a heading above the table
 * */

#include <stdio.h>

main() 
{
	/* print table header */
	printf("fahr\tcelsius\n--------------- \n");

	/*print table propper*/
	float fahr, celcius;
	int lower, upper, step;

	lower = 0; /* lower limit of the temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}

}
