#include "push_swap.h"

void    sa(t_node **a)
{
    t_node *first;
    t_node *second;

    if(!a || !*a || !(*a) -> next)
        return ;

    first = *a;
    second = first -> next;

    first -> next = second -> next;
    second = first;

    *a = second;

    write(1, "sa\n", 3);
}

void    pb(t_node **a, t_node **b)
{
    int     value;

    if (!a || !*a)
        return;

    value = stack_pop(a);
    stack_push(b, value);

    write(1, "pb\n", 3);
}

void    pa(t_node **a, t_node **b)
{
    int value;

    if(!b || !*b)
        return;
    value = stack_pop(b);
    stack_push(a, value);

    write(1, "pa\n", 3);
}