#include "push_swap.h"

int main(int ac, char **av)
{
    t_node  *a;
    long    value;
    int     i;
    int     size;

    i = 1;
    size = 0;
    a = NULL;
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
        add_back(&a, (int)value);
        i++;
    }
    if(has_duplicates(a))
    {
        write(2, "Error\n", 6);
        return(1);
    }
    if(is_sorted)
        return(1);
    size = stack_size(a);

}