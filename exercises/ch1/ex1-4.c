/*
 * Write a program to print the corresponding 
 * Celcius to Fahrenheit table
 * */

#include<stdio.h>

int main() 
{
	printf("celcius farenheit\n------------------\n");

	int lower_bound, upper_bound, step;
	float celcius, fahrenheit;

	lower_bound = 0;
	upper_bound = 300;
	step = 20;
	celcius = lower_bound;
	
	while(celcius <= upper_bound) 
	{
		fahrenheit = (celcius * 9.0/5.0) + 32;
		printf("%3.0f %6.1f\n", celcius, fahrenheit);
		celcius += step;
	}
}
