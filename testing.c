#include <stdio.h>

int ft_fact(int nb)
{
     if (nb < 0)
     return (0);

      if (nb == 0 || nb == 1)
      {
         return (1);
      }
      else
      {
         return nb *= ft_fact(nb - 1);              
      }
}
int main()
{
   printf("%d",ft_fact(3));

   return 0;
}