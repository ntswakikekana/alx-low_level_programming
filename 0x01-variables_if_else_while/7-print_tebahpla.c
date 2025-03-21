#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }
    
    putchar('\n');

    return (0);
}
