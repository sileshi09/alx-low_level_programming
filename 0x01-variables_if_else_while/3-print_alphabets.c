#include <stdio.h>
/**
 * main - print lowercase letters  followed by Uppercase
 *
 * getch() (Success)
 */
int main(void)
{
    int ch;
    for (ch= 'a'; ch<= 'z'; ch++)
    putchar(ch);
    putchar ('\n') ;
    for (ch= 'A'; ch<= 'Z'; ch++)
    putchar(ch);
return 0;
}
