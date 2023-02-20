#include <stdio.h>
/**
 * main - prints all possible combination of two two-digit numbers 
 * Return: Always 0 (success)
 */
int main(void)
{
        int n, m;
        for (n = 0; n < 100; n++)
        {
                for (m = 0; m < 100; m++)
                {
			if(n < m)
                                {
                                        putcha((n / 10) + 48);
					putcha((n % 10) + 48);
                                        putchar(' ');
					putcha((m / 10) + 48);
                                        putcha((m % 10) + 48);
					if (n != 98 || m != 99)
					{
						putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                
        }
        putchar('\n');
        return (0);
}
