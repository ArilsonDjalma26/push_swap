/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:09:12 by aalbano           #+#    #+#             */
/*   Updated: 2025/12/08 15:29:31 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char **vet)
{
	int		i;
	int		j;

	i = 0;
	while (vet[i])
	{
		j = 0;
		while (vet[i][j])
		{
			if (vet[i][j] < '0' || vet[i][j] > '9')
			{
				if ((vet[i][j] == '-' || vet[i][j] == '+') && j == 0)
					j++;
				else
					return (write(2, "Error\n", 7), 1);
			}
			else
				j++;
		}
		i++;
	}
	return (0);
}

static int	repeated(int value, t_node *a)
{
	while (a != NULL)
	{
		if (value == a->value)
			return (1);
		a = a->next;
	}
	return (0);
}

int	has_duplicates(char **vet, t_node **a)
{
	int		i;
	long	value;

	i = 0;
	while (vet[i])
	{
		if (verify(vet[i]) == 1)
			return (write(2, "Error\n", 7), 1);
		value = ft_atol(vet[i]);
		if (repeated(value, *a) == 1)
			return (write(2, "Error\n", 7), 1);
		add_back(a, value);
		i++;
	}
	return (0);
}

int	is_sorted(t_node *a)
{
	if (!a)
		return (1);
	while (a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

int	parse_args(int ac, char **av, t_node **a)
{
	int		i;
	char	**vet;

	i = 1;
	while (i < ac)
	{
		vet = ft_split(av[i], ' ');
		if (ft_strlen(vet[0]) == 0)
			return (write(2, "Error\n", 7), 1);
		if (is_number(vet) == 1)
			return (free_all(vet), 1);
		if (has_duplicates(vet, a) == 1)
			return (free_all(vet), 1);
		free_all(vet);
		i++;
	}
	return (0);
}
