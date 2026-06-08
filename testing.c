#include <stdio.h>

int ft_fact(int nb)
{
        int i;
        i = 1;
     while(nb < 1)
     {
        i *= nb; 
        nb--;
     }
     return i;
}

int main()
{
   ft_fact(5);

   return 0;
}