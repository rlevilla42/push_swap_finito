/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:31:47 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/21 23:38:40 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	if (size == 1)
		return (1);
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int	main(void)
{
	//t_stack	a;

	int	tab1[] = {0, 1, 2, 3, 4, 5};
	//int	tab2[] = {-999, 998, -888, 887, -777, 776, -666, 667};
	
	//a.tab = tab1;
	//a.tab = tab2;
	if (a_is_sorted(tab1, 6) == 1)
	{
		ft_printf("SEGFAULT OU PAS ??");
	}
	else
		ft_printf("LETS GOOOOO");
	//ft_putint(tab, 6);
	//ft_putint(a.tab, 6);
	return (0);
}*/
