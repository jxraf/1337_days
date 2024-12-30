void ft_sort_int_tab(int *tab, int size) {
    int y = 0;
    int z ;
    
    while (y < (size / 2)) {
    z = tab [y];
    tab [y] = tab[size-1-y];
    tab[size-1-y]=z;
     y++;   
    }
                                                                /*unfinished*/
