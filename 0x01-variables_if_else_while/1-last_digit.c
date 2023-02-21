#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - execute the program
 *Return: always 0 (success)
 */
int main(void)
{
        int n;
	int ld;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (ld > 5)
        {
                printf("Last digit of %d is %d and is greater than 5", n, ld);
        }
        else if (ld == 0)
        {
                printf("Last digit of %d is %d and is 0", n, ld);
        }
        else
        {
                printf("Last digit of %d is %d and less than 6 and not 0", n, ld);
        }
        return (0);
}
