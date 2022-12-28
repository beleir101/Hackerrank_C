#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * description: this will get u started with the scanf func and how to use it to accept string
 * Return: Always 0
 */

int main(void)
{
	char ch, s[100], sen[100];

	scanf("%c", &ch);
	scanf("\n");
	scanf("%[^\n]%*c", s);
	scanf("%[^\n]%*c", sen);

	printf("%c\n%s\n%s\n", ch, s, sen);

	return (0);
}
