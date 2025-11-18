#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    printf("this is x address %p\n", &x);
    printf("this is p address %p\n", p);
    printf("this is x value %d\n", (*p));

    return 0;
}

// this is x address 0x7ffeb6f9100c
// this is p address 0x7ffeb6f9100c
// this is x value 10