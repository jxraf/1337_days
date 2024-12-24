#include <unistd.h>
int ft_strlen (char *str) {
 int s = 0;
 while (str[s] != '\0') {
    s++;
 } 
 return (s);
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
char *str = "nigges in paris";
int nbr = 0;
nbr = ft_strlen(str);
ft_putnbr(nbr);

    return 0;
} 
*/
