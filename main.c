#include "push_swap.h"

int main(int ac, char **av)
{
    t_node  *a;
    long    value;
    int     i;

    a = NULL;
    i = 1;

    if (ac < 2)
        return(0);
    
    while(i < ac)
    {
        if (!is_number(av[i]))
        {
            write(2, "Error\n", 6);
            return(1);
        }
        value = ft_atol(av[i]);
        if(value < INT_MIN || value > INT_MAX)
        {
            write(2, "Error\n", 6);
            return(1);
        }
    }
}