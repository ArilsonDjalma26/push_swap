#include "push_swap.h"

int main(int ac, char **av)
{
    t_node  *a;
    t_node  *b;
    int     size;

    size = 0;
    a = NULL;
    b = NULL;
    if (ac < 2)
        return(0);
   printf("Oi");
    a = parse_args(ac, av);

    printf("Oi");
    if(is_sorted(a))
        free_stack(&a);
    size = stack_size(a);
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