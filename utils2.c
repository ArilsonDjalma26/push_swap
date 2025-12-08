/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:43 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:10:44 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

long	ft_atol(const char *str)
{
	long	result;
	int		i;
	int		sinal;

	result = 0;
	sinal = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sinal);
}

int	verify(const char *str)
{
	long	result;
	int		i;
	int		sinal;

	result = 0;
	sinal = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str[i + 1])
			return (1);
		if (str[i++] == '-')
			sinal = -1;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((sinal == -1 && (result * 10 + str[i] - '0') * -1 < INT_MIN)
			|| (sinal == 1 && result * 10 + str[i] - '0' > INT_MAX))
			return (1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (0);
}
