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
int cent, change;
if (argc != 2)
{
return (printf("Error\n"), 1);
}
cent = atoi(argv[1]);
while (cent > 0)
{
change++;
if ((cent - 25) >= 0)
{
cent -= 25;
continue;
}
if ((cent - 10) >= 0)
{
cent -= 10;
continue;
}
if ((cent - 5) >= 0)
{
cent -= 5;
continue;
}
if ((cent - 2) >= 0)
{
cent -= 2;
continue;
}
if ((cent - 1) >= 0)
{
cent -= 1;
continue;
}
cent--;
}
printf("%d\n", change);
return (0);
}
