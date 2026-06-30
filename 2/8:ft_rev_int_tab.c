void ft_rev_int_tab(int *tab, int size)
{
     int x;
     int y;
     int z;

     y = 0;
     z = size - 1
     while(y < z)
     {
           x = tab[y];
           tab[y] = tab[z];
           tab[z] = tab[y];
           y++;
           z--;
}