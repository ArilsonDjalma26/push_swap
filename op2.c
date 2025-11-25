#include "push_swap.h"

void    pa(t_node **a, t_node **b)
{
    int value;

    if(!b || !*b)
        return;
    value = stack_pop(b);
    stack_push(a, value);

    write(1, "pa\n", 4);
}
void    ra(t_node **a)
{
    rotate_stack(a);
    write(1, "ra\n", 4);
}
void    rra(t_node **a)
{
    reverse_rotate_stack(a);
    write(1, "rra\n", 5);
}