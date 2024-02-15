#include <stdexcept>
#include <stdio.h>

int main(void)
{
    int x = 2;
    int *p = &x;
    printf("%p\n", **p);
}