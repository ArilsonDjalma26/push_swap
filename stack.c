#include "push_swap.h"

t_node  *new_node(int value)
{
    t_node *n = malloc(sizeof(t_node));
    if(!n)
        return(NULL);
    n -> value = value;
    n -> next = NULL;
}

void stack_push(t_node **stack, int value)
{
    t_node *n = new_node(value);
    if(!n)
        return(NULL);
    n -> next = *stack;
    *stack = n;
}

int stack_pop(t_node **stack)
{
    t_node  *tmp;
    int     value;

    tmp = *stack;
    value = tmp -> value;
    *stack = tmp -> next;
    free(tmp);
    return(value);
}
void    add_back(t_node **stack, int value)
{
    t_node  *node;
    t_node  *last;

    node = new_node(value);
    if(!node)
        return;
    if(!*stack)
    {
        *stack = node;
        return;
    }
    last = *stack;
    while(last -> next)
        last = last -> next;
    last -> next = node;
}