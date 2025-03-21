#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 * then in uppercase, followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);
    
    for (letter = 'A'; letter <= 'Z'; letter++)
        putchar(letter);
    
    putchar('\n');

    return (0);
}
