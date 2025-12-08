/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:16 by aalbano           #+#    #+#             */
/*   Updated: 2025/12/08 15:51:13 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*n;

	n = malloc(sizeof(t_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->next = NULL;
	return (n);
}

void	stack_push(t_node **stack, int value)
{
	t_node	*n;

	n = new_node(value);
	if (!n)
		return ;
	n -> next = *stack;
	*stack = n;
}

int	stack_pop(t_node **stack)
{
	t_node	*tmp;
	int		value;

	tmp = *stack;
	value = tmp -> value;
	*stack = tmp -> next;
	free (tmp);
	return (value);
}

void	add_back(t_node **stack, int value)
{
	t_node	*node;
	t_node	*last;

	node = new_node(value);
	if (!node)
		return ;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	last = *stack;
	while (last -> next)
		last = last -> next;
	last -> next = node;
}
