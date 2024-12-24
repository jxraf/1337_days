#include <unistd.h>
void ft_putstr (char *str) {
 int s = 0;

 while (str[s] != '\0') {
    write (1,&str[s],1) ;
    s++;
 } 
}
/*
int main (void) {
ft_putstr("nigga snake");
    return 0;
}*/
