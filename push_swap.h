#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>

typedef struct s_node
{
    int     value;
    struct s_node *next;
}   t_node;

t_node  *new_node(int value);
void stack_push(t_node **stack, int value);
int stack_pop(t_node **stack);

//operações
void    sa(t_node **a);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);

#endif