#include <stdio.h>
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


int main ()  
{
    int x = 20;
    int z = 2;

    ft_ultimate_div_mod(&x,&z);

    printf("%d \n",x);
    printf("%d \n",z);


}
