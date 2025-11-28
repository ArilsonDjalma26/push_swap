/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:36 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:10:38 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    move_min_to_top(t_node **a)
{
    int     pos;
    int     size;
    
    pos = find_min_position(*a);
    size = stack_size(*a);

    if(pos == 0)
        return ;
    if(pos <= size/2)
    {
        while(pos--)
            ra(a);
    }
    else
    {
        pos = size - pos;
        while(pos--)
            rra(a);
    }
}

int find_min_position(t_node *a)
{
    int     min;
    int     pos;
    int     i;

    min = a -> value;
    pos = 0;
    i = 0;

    while(a)
    {
        if(a -> value < min)
        {
            min = a -> value;
            pos = i;
        }
        i++;
        a = a -> next;
    }
    return(pos);
}

int stack_size(t_node *begin_list)
{
    int     count;

    count = 0;
    while(begin_list != NULL)
    {
        count++;
        begin_list = begin_list -> next; 
    }
    return(count);
}
void    free_stack(t_node **stack)
{
    t_node  *curr;
    t_node *temp;

    if(!stack || !*(stack))
        return ;
    curr = *stack;
    while(curr != NULL)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
    *stack = NULL;
}

void    error_free(t_node **stack)
{
    write(2, "Error\n", 7);
    free_stack(stack);
    exit(1);
}
