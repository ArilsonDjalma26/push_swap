/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:25 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:10:27 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_stack(t_node **stack)
{
    if(!stack || !*stack || !(*stack) -> next )
        return ;
    
    t_node  *first;
    t_node  *last;

    first = *stack;
    last =  *stack;

    while (last -> next)
        last = last -> next;
    *stack = first->next;
    last -> next = first;
    first->next = NULL;
}
void    reverse_rotate_stack(t_node **stack)
{
        if(!stack || !*stack || !(*stack) -> next )
        return ;

    t_node  *last;
    t_node  *second_last;

    last = *stack;
    second_last = NULL;
    while(last -> next)
    {
        second_last = last;
        last = last -> next;
    }
    second_last -> next = NULL;
    last -> next = *stack;
    *stack = last;
}
