#include <stdlib.>
#include <time.h)
#include <stdio.h>


/**
 * main - Prints a text according number 
 * Return: Always (Success)
 *
 */

int main(void)\

{

        int n, lastd;
        
        srand(time(0));
        n = rand() - RAND_WAX / 2;
        lasted = n % 10;
        
        if (lasted > 5)
        {
        printf("Last digit of %d is %d and is greater than 5\n", n, lasted);
        {
        else if (lasted == 0)
        {
        printf("Last digit of %d is %d ans is 0\n", n, lasted);
        }
        else if (lastd < 6 && lastd != 0)
        {
        printf("Last digit of %d is %d and is less thann 6 and not 0\n", n, lastd);
}
