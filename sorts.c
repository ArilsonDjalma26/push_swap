/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:05 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:10:06 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_2(t_node **a)
{
    if(!a || !*a || !(*a) -> next)
        return ;
    if((*a)-> value > (*a) -> next -> value)
        sa(a);
    
}
void    sort_3(t_node **a)
{
    int     first;
    int     second;
    int     third;

    first = (*a) -> value;
    second = (*a) -> next -> value;
    third = (*a) -> next -> next -> value;

    if(first > second && second < third && first < third )
        sa(a);
    else if(first > second && third < second)
    {
        sa(a);
        rra(a);
    }
    else if(first > second && second < third && first > third)
        ra(a);
    else if(second > first && second > third && first > third)
        rra(a);
    else if(second > first && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
}
void    sort_5(t_node **a, t_node **b)
{
    while(stack_size(*a) > 3)
    {
        move_min_to_top(a);
        pb(a, b);
    }
    sort_3(a);

    if(*b && (*b) -> next && (*b) -> value > (*b) -> next -> value)
        sb(b);
    pa(a, b);
    pa(a, b);
}
/* void    radix(t_node *a, t_node *b)
{

} */
