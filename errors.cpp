#include <stdexcept>
#include <stdio.h>

int main(void)
{
    int x = 2;
    try
    {
        if (x == 2)
        {
            throw std::exception();
        }
        else 
        {
            
        }
    }
    catch(std::exception& e)
    {
        x = 3;
    }
    printf("%d", x);
    return 0;

}