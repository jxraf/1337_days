#include <stdlib.h>

int *ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    i = 0;
    size = max - min;

    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    *range = malloc(sizeof(int) * size);

    if (*range == NULL)
        return (-1);

    while(i < size)
    {
          range[i] = min + i;
          i++;
    }
    return **range;
}