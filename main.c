/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:08:35 by aalbano           #+#    #+#             */
/*   Updated: 2025/11/26 13:08:38 by aalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_node  *a;
    t_node  *b;
    int     size;

    size = 0;
    a = NULL;
    b = NULL;
    if (ac < 2)
        return(0);
    if (parse_args(ac, av, &a) == 1)
        return (free_stack(&a), 0);
    if(is_sorted(a))
        return(free_stack(&a), 0);
    size = stack_size(a);
    if(size == 2)
        sort_2(&a);
    else if(size == 3)
        sort_3(&a);
    else if(size == 4)
        sort_4(&a, &b);
    else if(size == 5)
        sort_5(&a, &b);
    else
        printf("Radix");

    free_stack(&a);
}
