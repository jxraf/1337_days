#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

   if(power < 0)
   {
      return 0;
   }
   
   if (power == 0)
   {
      return 1;
   }
   else
   {
      return   ft_recursive_power(nb,power - 1) * nb  ;
   }
}
int main()
{
printf("%d",ft_recursive_power(6,3));

return 0;
}
