#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
int result;
result = 1;

   if(power < 0)
      return 0;
   
   while(power > 0)
   {
      result *= nb;
      power--;
   }   
   return result;
}

int main()
{
printf("%d",ft_iterative_power(6,0));
}