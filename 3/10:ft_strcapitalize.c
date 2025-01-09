char *ft_strcapitalize(char *str) { 
char *x=str;
if (*str >='a' && *str <= 'z')  {
    *str -= 32; } str++; 
    while (*str) {
if (*str >='A' && *str <= 'Z')  
   { str += 32; }
if (! ((*(str-1) >= 'a' && *(str-1) <= 'z')||
     (*(str-1) >= '0' && *(str-1) <= '9') ||
     (*(str-1) >= 'A' && *(str-1) <= 'Z') )  &&
     (*str >= 'a' && *str <= 'z') ) {
         *str -= 32; }              
str++; }
return x; }
