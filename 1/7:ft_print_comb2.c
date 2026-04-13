#include <unistd.h>

void ft_print_comb2(void) 
{
        char      a;
        char      b;
        char      c;
        char      d;
        
        a  = '0';

        while (a <= '9') 
        {
                b = '0';
                while (b <= '9') 
                {
                        c = a;
                        d = b + 1;
                        
                        while (c <= '9') 
                        {
                                while (d <= '9')
                                {
                                        write(1, &a, 1);
                                        write(1, &b, 1);
                                        write(1, " ", 1);
                                        write(1, &c, 1);
                                        write(1, &d, 1);
                                        if (!(a == '9' && b == '8'))
                                        write(1, ", ", 2);
                                        d++;
                                }
                                c++;
                                d = '0';
                        }b++;
                }a++;
        } 
}
