#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) 
{
        write(1, &c, 1);
}

void ft_cmb2(void)
{
        char a;
        char b;
        char c;
        char d;

        a = '0';
        while (a <= 9)
        {
                b = '0';
                while (b <= 8)
                {
                        c = a + 1;
                        while (c <= 9)
                        {
                                d = b + 1;
                                while (d <= 9)
                                {
                                        ft_putchar(a);
                                        ft_putchar(b);
                                        ft_putchar(' ');
                                        ft_putchar(c);
                                        ft_putchar(d);
                                        
                                        d++;
                                }c++;
                        }b++;
                }a++;
        }
}















// void ft_comb(void)
// {
//         char a;
//         char b;
//         char c;

//         a = '0';

//         while (a <= '7')
//         {
//                 b = a + 1;
//                 while (b <= '8')
//                 {
//                         c = b + 1;
//                         while (c <= '9')
//                         {
//                                 ft_putchar(a);
//                                 ft_putchar(b);
//                                 ft_putchar(c);
//                                 if (a != '7' || b != '8' || c != '9') 
//                                 write(1, ", ", 2);
                        
//                         c++;
//                         }
                       
//                         b++;
//                 }
                
//                 a++;
//         }
// }


int main ()
{
        ft_cmb2();

        return 0;
}