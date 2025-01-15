#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n){
    while (*s1 == *s2 && *s1 && n--) {
        s1++, s2++;
    }
    return (*s1 - *s2);   
}
