#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Description: just print out sum diffenerences of integers and floats
 * Return: Always 0
 */

int main(void)
{
	int a, b;
	float c, d;

	scanf("%d", &a);	
	scanf("%d", &b);
	scanf("%f", &c);
	scanf("%f", &d);

	printf("%d %d\n",(a + b), (a - b));
	printf("%0.1f %0.1f", (c + d), (c - d));

	return (0);
}
