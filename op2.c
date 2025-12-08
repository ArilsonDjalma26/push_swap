/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:09:00 by aalbano           #+#    #+#             */
/*   Updated: 2025/12/08 14:25:20 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!b || !*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write (1, "pa\n", 3);
}

void	ra(t_node **a)
{
	rotate_stack (a);
	write (1, "ra\n", 3);
}

void	rra(t_node **a)
{
	reverse_rotate_stack (a);
	write (1, "rra\n", 4);
}
