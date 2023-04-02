/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:58:19 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/26 20:46:04 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack a)
{
	int	i;
	int	temp;
	int	last_index;

	i = a.size[0] - 1;
	last_index = a.size[0] - 1;
	temp = a.tab[last_index];
	if (a.size[0] == 0)
		return ;
	while (i > 0)
	{
		a.tab[i] = a.tab[i - 1];
		i--;
	}
	a.tab[0] = temp;
	ft_printf("rra\n");
	return ;
}

void	reverse_rotate_b(t_stack b)
{
	int	i;
	int	temp;
	int	last_index;

	i = b.size[0] - 1;
	last_index = b.size[0] - 1;
	temp = b.tab[last_index];
	if (b.size[0] == 0)
		return ;
	while (i > 0)
	{
		b.tab[i] = b.tab[i - 1];
		i--;
	}
	b.tab[0] = temp;
	ft_printf("rrb\n");
	return ;
}

void	reverse_rot(t_stack x)
{
	int	i;
	int	temp;
	int	last_index;

	i = x.size[0] - 1;
	last_index = x.size[0] - 1;
	temp = x.tab[last_index];
	if (x.size[0] == 0)
		return ;
	while (i > 0)
	{
		x.tab[i] = x.tab[i - 1];
		i--;
	}
	x.tab[0] = temp;
	return ;
}

void	r_reverse_rotate(t_stack a, t_stack b)
{
	if (a.size[0] == 0)
		return ;
	else
		reverse_rot(a);
	if (b.size[0] == 0)
		return ;
	else
		reverse_rot(b);
	ft_printf("rrr\n");
	return ;
}
/*
int	main(void)
{
	t_stack	a;
	t_stack	b;
	int	tab1[] = {7, 5, 6, 9, 3, 8, 4};
	int	tab2[] = {0, 12, 2, 10, 1, 11};
	int	size1[] = {7};
	int	size2[] = {6};
	a.tab = tab1;
	a.size = size1;
	b.tab = tab2;
	b.size = size2;
	aff_stack(a, b);
	reverse_rotate_a(a);
	reverse_rotate_b(b);
	aff_stack(a, b);
}*/
