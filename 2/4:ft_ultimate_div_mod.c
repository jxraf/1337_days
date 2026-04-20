#include <unistd.h>

void   ft_ultimate_div_mod(int *a, int *b)
{
       int    x;
       int    z;

       x = *a / *b;
       z = *a % *b;

       *a = x;
       *b = z;
       
}
