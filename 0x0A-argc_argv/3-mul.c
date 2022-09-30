#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of Arguments
 *
 * Return: Return 0 (Success)
 */

int main(int argc, char *argv[])
{
int result;
(void) argv;
if (argc != 3)
{
printf("Error\n");
}
else
{
result = ((atoi(argv[1])) * (atoi(argv[2])));
printf("%d\n", result);
}
return (0);
}
