#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left int he year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int monthly;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Data: %02d/%02d/%04d/n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
