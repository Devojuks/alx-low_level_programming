#include <stio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char ch;

	fr (ch = 'a'; ch <= 'z'; ch++)
	{
		pustchar(ch);
	}
	putchar('\n');
	return (0);
}
	
	
