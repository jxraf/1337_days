#include <unistd.c>
void ft_putstr(char *str) 
{
  int s;
  s = 0; 
  while (str[s]) 
  {
      write (1, &str[s], 1);
      s++; 
  }
}
