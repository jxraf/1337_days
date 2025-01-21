#include <stdio.h>
int ft_atoi(char *str) {
    int minus = 0;
    int num = 0;
while ((*str >=9 && *str <= 13) || *str == 32) {
    str++;}
while (*str == '+' || *str == '-') {
    if (*str == '-') { minus++;}
   str++;
}    
while (*str >= 48 && *str <= 57) {
    num *= 10;
    num += *str - 48;
    str++;
}    
if (!(minus % 2)) {
    return (num);
}
    return (-num); 
 }
