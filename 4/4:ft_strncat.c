char *ft_strncat(char *dest, char *src, unsigned int nb) {
     int x = 0; 
     int y = 0;
while (dest[x] != '\0') {
    x++;
}
while (src[y] != '\0' && y < nb ) {
    dest[x] = src[y];
    x++;
    y++;
}
dest[x] ='\0';
return dest;
}
