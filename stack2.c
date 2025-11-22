#include "push_swap.h"

void    rotate_stack(t_node **stack)
{
    if(!stack || !*stack || !(*stack) -> next )
        return ;
    
    t_node  *first;
    t_node  *last;

    first = *stack;
    last = first;

    while (last -> next)
        last = last -> next;
    last -> next = first;
    first = first -> next;
}
void    reverse_rotate_stack(t_node **stack)
{
        if(!stack || !*stack || !(*stack) -> next )
        return ;

    t_node  *last;
    t_node  *second_last;

    last = *stack;
    while(last -> next)
    {
        second_last = last;
        last = last -> next;
    }
    second_last -> next = NULL;
    last -> next = *stack;
    *stack = last;
}