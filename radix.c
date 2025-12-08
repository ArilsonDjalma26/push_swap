#include "push_swap.h"

static  int get_max_bits(t_node *stack)
{
    int     max;
    int     bits;
    t_node  *tmp;

    max = 0;
    bits = 0;
    tmp = stack;
    while(tmp)
    {
        if(tmp -> index > max)
            max = tmp -> index;
        tmp = tmp -> next;
    }
    while((max >> bits) != 0)
        bits++;
    return(bits);
}

void radix_sort(t_node **a, t_node **b)
{
    int size;
    int max_bits;
    int i;
    int j;

    size = stack_size(*a);
    max_bits = get_max_bits(*a);
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if ((((*a)->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
            j++;
        }
        while (*b)
            pa(a, b);
        i++;
    }
}