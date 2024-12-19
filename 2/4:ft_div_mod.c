#include <unistd.h>
void  ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}
 /*
 void ft_putchar (char c) {
     write (1,&c,1);
 }
 void ft_putnbr (int nbr) {
     
     if (nbr > -1 && nbr < 10) {
         ft_putchar (nbr + 48);
     } 
     else if (nbr > 9) {
         ft_putnbr(nbr / 10);
         ft_putchar(nbr % 10 +48); 
     }
     else  {
         ft_putchar ('-');
         nbr *= -1;
         ft_putnbr(nbr);
     }
 }
int main (void) {
    int a =20;
    int b =2;
    int div;
    int mod;
    
    ft_div_mod (a,b,&div,&mod);
    write(1,"result is ",10);
    ft_putnbr(div);
    ft_putchar('\n');
      
      write(1,"remainder is ",13);
    ft_putnbr(mod);
    
    return 0;
}*/
