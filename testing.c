#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b) 
{
        int c;
        c = *a;

        *a = *b;
        *b = c;
}                       



int main () 
{
       
        int nb = 10;
        int na = 1;
        
        printf("%d \n",nb);
        printf("%d \n",na);


        ft_swap(&nb, &na);

        printf("%d \n",nb);
        printf("%d \n",na);



        // int     a = 64;
        // int     *p = &a;
        // int     *n;
        // *n = 42;
        // printf("%d \n", a);
        // printf("%p \n", &a);
        // printf("%p \n", p);
        // printf("%p \n", &p);
        // printf("%d \n", *p);
        // printf("%d \n", *n);

        return 0;
}
