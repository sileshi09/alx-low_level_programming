# include <stdio.h>
/**
 * main - A program that prints the alpabet in lowercase
 *
 * Return: 0 (Seccuss)
 */

int main(void)
{
 
    for(int x = 'a'; x <= 'z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}
