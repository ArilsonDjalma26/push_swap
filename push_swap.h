/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:09:48 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:09:52 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void	free_all(char **tab);

void    sa(t_node **a);
void    sb(t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void    ra(t_node **a);
void    rra(t_node **a);
void    sort_2(t_node **a);
void    sort_3(t_node **a);
void    sort_4(t_node **a, t_node **b);
void    sort_5(t_node **a, t_node **b);

long    ft_atol(const char *str);
int     verify(const char *str);
int     is_number(char **vet);
int     is_sorted(t_node *a);
int     stack_size(t_node *begin_list);
int     find_min_position(t_node *a);
void    move_min_to_top(t_node **a);
int     find_min_position(t_node *a);
char	**ft_split(char const *s, char c);
int     parse_args(int ac, char **av, t_node **a);
void    index_stack(t_node *stack);
size_t	ft_strlen(const char *s);
#endif
