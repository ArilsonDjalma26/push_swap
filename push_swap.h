#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>


typedef struct s_node
{
    int     value;
    int     index;
    struct s_node *next;
}   t_node;

t_node  *new_node(int value);
void    stack_push(t_node **stack, int value);
int     stack_pop(t_node **stack);
void    add_back(t_node **stack, int value);
void    rotate_stack(t_node **stack);
void    reverse_rotate_stack(t_node **stack);
void    free_stack(t_node **stack);
void    error_free(t_node **stack);

void    sa(t_node **a);
void    sb(t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void    ra(t_node **a);
void    rra(t_node **a);
void    sort_2(t_node **a);
void    sort_3(t_node **a);
void    sort_5(t_node **a, t_node **b);

long    ft_atol(const char *str);
int     is_number(char *str);
int     has_duplicates(t_node *a);
int     is_sorted(t_node *a);
int     stack_size(t_node *begin_list);
int     find_min_position(t_node *a);
void    move_min_to_top(t_node **a);
int     find_min_position(t_node *a);
t_node *parse_args(int ac, char **av);
#endif