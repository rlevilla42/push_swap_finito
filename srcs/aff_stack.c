/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:06:20 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 23:37:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "push_swap.h"

void	aff_stack(t_stack a, t_stack b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (a.size[0] == 0)
		ft_printf("a.tab is EMPTY\n");
	else if (b.size[0] == 0)
		ft_printf("b.tab is EMPTY\n");
	if (a.size[0] > b.size[0])
	{
		while (j < b.size[0])
		{
			ft_printf("a.tab[%d] = %d\t\tb.tab[%d] = %d\n", i, a.tab[i], j, b.tab[j]);
			i++;
			j++;
		}
		while (i < a.size[0])
		{
			// a partir de la, une fois que c trier ca malloc error wtf ??
			ft_printf("a.tab[%d] = %d\n", i, a.tab[i]);
			i++;
		}
	}
	else if (b.size[0] > a.size[0])
	{
		while (i < a.size[0])
		{
			ft_printf("a.tab[%d] = %d\t\tb.tab[%d] = %d\n", i, a.tab[i], j, b.tab[j]);
			i++;
			j++;
		}
		while (j < b.size[0])
		{
			ft_printf("\t\t\tb.tab[%d] = %d\n", j, b.tab[j]);
			j++;
		}
	}
	else if (a.size[0] == b.size[0])
	{
		while (i < a.size[0])
		{
			ft_printf("a.tab[%d] = %d\t\tb.tab[%d] = %d\n", i, a.tab[i], j, b.tab[j]);
			i++;
			j++;
		}
	}
	ft_printf("\n");
	return ;
}

int main(void)
{
	t_stack	a;
	t_stack	b;
	int	tab1[] = {1, 42, 67, 987, 667, 999, 666};
	//int	tab2[] = {-1, -2, -4, -6, -8, -612, -456, -111, -113};
	int	size1[] = {7};
	//int	size2[] = {9};
	b.tab = (int *)malloc(sizeof(int) * a.size[0]);
	a.tab = tab1;
	//b.tab = tab2;
	a.size = size1;
	//b.size = size2;
	aff_stack(a, b);
	pb_push_b(a, b);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	ft_putint(b.tab, b.size[0]);
	//aff_stack(a, b);
}*/
