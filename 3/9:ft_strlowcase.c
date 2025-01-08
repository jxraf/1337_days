#include <unistd.h>
	char	*ft_strlowcase(char *str) {
  while (*str) {
if (*str >= 'A' && *str <= 'Z') { 
    *str += 32;}  
str++; 
}  return str;}
