#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by new line
 * but for multiples of three prints Fizz instead of the number
 * and for multiples of five prints Buzz 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d\n", i);
		} else
		{
			printf(" %d\n", i);
		}
	}
	printf("\n");

	return (0);
}
