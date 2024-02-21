#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
cat > 9-print_comb.c
#include <stdio.h>
/**
 * main - printing numbers from 0-9 with comas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9,"
 * Return: 0
 */
int main(void)
{
        int c;

        for (c = 48; c <= 57; c++)
        {
                putchar(c);
                if (c != 57)
                {
                       putchar(',');
                       putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
