#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		char letter;

			for (letter = 'a'; letter <= 'z'; letter++)
						putchar(letter);

				putchar('\n');

					return (0);
}
