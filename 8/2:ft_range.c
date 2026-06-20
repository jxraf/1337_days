#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *range;
    int size;

    i = 0;
    range = 0;
    size = max - min;
    
    if (min >= max)
        return 0;

    range = malloc(sizeof(int) * size);
 
    while(i < size)
    {
          range[i] = min + i;
          i++;
    }
    return range;
}