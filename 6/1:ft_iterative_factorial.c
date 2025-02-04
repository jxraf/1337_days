#include <stdio.h>

int ft_iterative_factorial(int nb) {

    if  (nb == 0 || nb == 1 ) { return 1;}
    if (nb < 0) {return 0;}
    
    int nbr = 1;
    int result = 1;
    while (nbr < nb) {
        nbr++;
        result *= nbr;
    }  
        return result;
 
}
