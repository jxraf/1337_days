#include <stdlib.h>
#include <stdio.h>

int cal_size(int size, char **strs, char *sep)
{
    int     ret_size;
    int     sep_size;
    int     i;
    int     j;
    
    ret_size = 0;
    i = 0;
    j = 0;
    while(i < size)
    {
        
        while(strs[i][j])
        {
            j++;
        }    
        ret_size += j;
        j = 0;
        i++;
    }
    i = 0;
    while(sep[i])
    {
        i++;
    }
    sep_size = i;
    
    ret_size += sep_size * (size - 1);
    return (ret_size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char    *ret;
    int     len;
    int     x = 0;
    int     y = 0;
    int     z = 0;
    
    if (size == 0)
    {
        ret = malloc(1);
        ret[0] = '\0';
        return (ret);
    }
    
    len = cal_size(size, strs, sep);
    ret = malloc(len + 1);
    
    while (x < size)
    {
        while (strs[x][y])
        {
            ret[z] = strs[x][y];
            y++;
            z++;
        }
        y = 0;
        if (x < size - 1)
        {
            while (sep[y])
            {
                ret[z] = sep[y];
                y++;
                z++;
            }
            
        }
        y = 0;
        x++;
    }
    return (ret);
}