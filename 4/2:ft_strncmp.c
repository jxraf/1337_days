#include <stdio.h>
int ft_strcmp(char *s1, char *s2, unsigned int n) {
    int i;
    i = 0;

    while(n-- &&(s1[i] || s2[i])
    {
        if (s1[i] != s2[i]) 
            return(s1[i] - s2[2]);
        i++;
    }  
    return 0;
}