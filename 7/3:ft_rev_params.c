#include <unistd.h>
void ft_putstr (char *str) 
{
 int s = 0;

 while (str[s] != '\0') 
 {
    write (1,&str[s],1) ;
    s++;
 } 
 write (1, "\n", 1);
}
int main(int argc, char **argv)
{
    while(argc > 1)
    {
         argc--;
         ft_putstr(argv[argc]);
    }
    return 0;
}