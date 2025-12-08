/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:13:55 by aalbano           #+#    #+#             */
/*   Updated: 2025/12/08 14:22:12 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*copy_values(t_node *stack, int size)
{
	int		i;
	int		*arr;
	t_node	*tmp;

	i = 0;
	arr = (int *)malloc(sizeof(int) * size);
	tmp = stack;
	while (i < size && tmp)
	{
		arr[i] = tmp -> value;
		tmp = tmp -> next;
		i++;
	}
	return (arr);
}

static void	sort_array(int *arr, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	assing_index(int *arr, t_node *stack, int size)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == tmp -> value)
			{
				tmp -> index = i;
				break ;
			}
			i++;
		}
		tmp = tmp -> next;
	}
}

void	index_stack(t_node *stack)
{
	int		size;
	int		*arr;

	size = stack_size (stack);
	arr = copy_values (stack, size);
	sort_array (arr, size);
	assing_index (arr, stack, size);
	free (arr);
}
