#include "push_swap.h"

int main(int ac, char **av)
{
    t_node  *a;
    t_node  *b;
    long    value;
    int     i;
    int     size;

    i = 1;
    size = 0;
    a = NULL;
    b = NULL;
    if (ac < 2)
        return(0);
   
    a = parse_args(ac, av);

    if(is_sorted)
        return(0);
    size = stack_size(&a);
    if(size == 2)
        sort_2(&a);
    else if(size == 3)
        sort_3(&a);
    else if(size <= 5)
        sort_5(&a, &b);
/*     else
        radix(&a, &b);
        */
} 