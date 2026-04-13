#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb) 
{
        // to handle the stack overflow
        if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
        //handle all the number excpt neg with recursion 
        if (nb > -1 && nb < 10)
        {
                ft_putchar(nb + 48);
        }
        else if (nb > 9)
        {
                ft_putnbr(nb / 10);
                ft_putchar((nb % 10) + 48);
        }
        else
        //handle the negative number 
        {
                ft_putchar('-');
                nb *= -1;
                ft_putnbr(nb);
        }

}        

int main () 
{

        ft_putnbr(-54);

        return 0;
}