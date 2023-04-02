/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:47:57 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/26 20:45:12 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack a)
{
	int	i;
	int	last_index;
	int	temp;

	i = 0;
	last_index = a.size[0] - 1;
	temp = a.tab[0];
	if (a.size[0] == 0)
		return ;
	while (i < a.size[0] - 1)
	{
		a.tab[i] = a.tab[i + 1];
		i++;
	}
	a.tab[last_index] = temp;
	ft_printf("ra\n");
	return ;
}

void	rotate_b(t_stack b)
{
	int	i;
	int	last_index;
	int	temp;

	i = 0;
	last_index = b.size[0] - 1;
	temp = b.tab[0];
	if (b.size[0] == 0)
		return ;
	while (i < b.size[0] - 1)
	{
		b.tab[i] = b.tab[i + 1];
		i++;
	}
	b.tab[last_index] = temp;
	ft_printf("rb\n");
	return ;
}

void	rotate(t_stack x)
{
	int	i;
	int	last_index;
	int	temp;

	i = 0;
	last_index = x.size[0] - 1;
	temp = x.tab[0];
	while (i < x.size[0])
	{
		x.tab[i] = x.tab[i + 1];
		i++;
	}
	x.tab[last_index] = temp;
}

void	r_rotate(t_stack a, t_stack b)
{
	if (a.size[0] != 0 && b.size[0] != 0)
	{
		rotate(a);
		rotate(b);
		ft_printf("rr\n");
	}
	return ;
}
/*
int	main(void)
{
	t_stack	a;
	int	tab[] = {11, 0, 10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
	int	size[] = {12};
	a.tab = tab;
	a.size = size;
	aff_a(a);
	rotate_a(a);
	aff_a(a);
}*/
