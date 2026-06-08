#include <stdio.h>

int ft_iterative_factorial(int nb) {

    int i;
    i = 1;

    while(nb > 1)
    {
        i *= nb;
        nb--;
    }
 return i;
}
