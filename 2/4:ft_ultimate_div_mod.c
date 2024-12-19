#include <unistd.h>
void ft_ultimate_div_mod(int *a, int *b){
  int  div = *a / *b;
  int mod = *a % *b;
 *a = div;
 *b = mod;
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
    
   ft_ultimate_div_mod(&a,&b);
    write(1,"result is ",10);
    ft_putnbr(a);
    ft_putchar('\n');
      
      write(1,"remainder is ",13);
    ft_putnbr(b);
    
    return 0;
} */
