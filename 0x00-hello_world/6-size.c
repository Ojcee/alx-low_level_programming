#include <stdio.h>

/**
 * main - prints the size of various types
 * return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of a int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
