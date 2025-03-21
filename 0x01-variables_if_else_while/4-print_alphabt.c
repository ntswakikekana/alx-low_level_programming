#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 * except for 'q' and 'e', followed by a new line,
 * using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }
    
    putchar('\n');

    return (0);
}
