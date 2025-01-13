#include <unistd.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int x = 0;
    unsigned int y=0;
 while (src[x] !='\0' ) {
        x++;  }
    while (src[y] !='\0' && y <(size-1)) {
        dest[y] = src[y];
        y++; }
  dest[y]='\0';
    return x;
}
