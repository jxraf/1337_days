void ft_sort_int_tab(int *tab, int size)
{
    int x;
    int y;
    int z;

    y = 0;
    while (x < size)
    {
     z = y + 1;
     while (z < size)
     {
         x = tab[y];
         tab[y] = tab[z];
         tab[z] = x;
         z++;
     }
     y++;
    }
}
                                                       
