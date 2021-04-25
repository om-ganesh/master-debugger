#include<stdio.h>

int main()
{
    char start = '.';
    char *ptr = &start;
    while(1)
    {
        if(*ptr == '\0')
        {
            putchar('\n');
        }
        else
        {
            putchar(*ptr);
        }
        fflush(stdout);
        ptr++;
    }
    return 0;
}