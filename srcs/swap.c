/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:41:39 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/21 22:26:28 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack a)
{
	int	temp;

	if (a.size[0] < 2)
		return ;
	temp = a.tab[0];
	a.tab[0] = a.tab[1];
	a.tab[1] = temp;
	ft_printf("sa\n");
}

void	swap_b(t_stack b)
{
	int	temp;

	if (b.size[0] < 2)
		return ;
	temp = b.tab[0];
	b.tab[0] = b.tab[1];
	b.tab[1] = temp;
	ft_printf("sb\n");
}

void	sswap(t_stack a, t_stack b)
{
	int	temp;

	if (a.size[0] < 2 || b.size[0] < 2)
		return ;
	temp = a.tab[0];
	a.tab[0] = a.tab[1];
	a.tab[1] = temp;
	temp = b.tab[0];
	b.tab[0] = b.tab[1];
	b.tab[1] = temp;
	ft_printf("ss\n");
}
/*
int main(void)
{
	t_stack	a;
	t_stack b;
	int	tab1[] = {9, 12, 34, 45, 999, 667};
	int	size1[] = {6};
	int	size2[] = {7};
	int	tab2[] = {-65, +87, 829, -11, -18, -345, 21};
	a.tab = tab1;
	b.tab = tab2;
	a.size = size1;
	b.size = size2;
	sswap(a, b);
	//swap_a(a);
	ft_putint(a.tab, 6);
	ft_printf("\n\n");
	//swap_b(b);
	ft_putint(b.tab, 7);
}*/
