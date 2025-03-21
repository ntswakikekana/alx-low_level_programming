#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = '0'; num <= '9'; num++)
    {
        putchar(num);
    }
    
    for (num = 'a'; num <= 'f'; num++)
    {
        putchar(num);
    }
    
    putchar('\n');

    return (0);
}
