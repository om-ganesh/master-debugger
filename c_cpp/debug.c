#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

uint32_t max(uint32_t a, uint32_t b)
{
    uint32_t result;
    if(a>result)
    {
        result = a;
    }
    if(b>result)
    {
        result = b;
    }
    return result;
}

int main()
{
    uint32_t x;
    uint32_t y;
    x=0;
    y= 100;

    uint32_t result = max(x,y);
    if(result != y)
    {
        printf("What the hell\n");
    }

    x = 10;
    y= 0;
    result = max(x,y);
    if(result != x)
    {
        printf("What the heck\n");
    }
    
    return 0;
}