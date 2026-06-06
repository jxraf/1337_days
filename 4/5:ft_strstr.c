char *ft_strstr(char *str, *char *finder)
{
     int x;
     int z;
 
     x = 0;
     z = 0;
 
     if(finder[0] == '\0')
         return (str);

     while(str[x])
     {
          while(str[x + y] == finder[y] && finder[y] != '\0')
          {
              y++;
          }
          if(finder[y] == '\0')
             return (&str[x]);

          y++;
      }
 }