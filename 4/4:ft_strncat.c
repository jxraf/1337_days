char *ft_strncat(char *dest, char *src, unsigned int nb) {
     int x = 0; 
     int y = 0;
while (dest[x] != '\0') {
    x++;
}
while (src[y] != '\0' && y < nb ) {
    dest[x + y] = src[y];
    y++;
}
dest[x + y] ='\0';
return dest;
}
