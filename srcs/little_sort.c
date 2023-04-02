/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:57:13 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 15:43:43 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack a)
{
	if (a.tab[0] == 0 && a.tab[1] == 2 && a.tab[2] == 1)
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a.tab[0] == 1 && a.tab[1] == 2 && a.tab[2] == 0)
		reverse_rotate_a(a);
	else if (a.tab[0] == 1 && a.tab[1] == 0 && a.tab[2] == 2)
		swap_a(a);
	else if (a.tab[0] == 2 && a.tab[1] == 0 && a.tab[2] == 1)
		rotate_a(a);
	else if (a.tab[0] == 2 && a.tab[1] == 1 && a.tab[2] == 0)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
}

void	sort_three_custom(t_stack a, t_stack b)
{
	if (a.tab[0] == 2 && a.tab[1] == 3 && a.tab[2] == 4)
		full_push_a(a, b, b.size[0]);
	else if (a.tab[0] == 2 && a.tab[1] == 4 && a.tab[2] == 3)
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a.tab[0] == 3 && a.tab[1] == 4 && a.tab[2] == 2)
		reverse_rotate_a(a);
	else if (a.tab[0] == 3 && a.tab[1] == 2 && a.tab[2] == 4)
		swap_a(a);
	else if (a.tab[0] == 4 && a.tab[1] == 2 && a.tab[2] == 3)
		rotate_a(a);
	else if (a.tab[0] == 4 && a.tab[1] == 3 && a.tab[2] == 2)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	return ;
}

void	sort_five(t_stack a, t_stack b)
{
	while (a.tab[0] != 0)
		rotate_a(a);
	pb_push_b(a, b);
	while (a.tab[0] != 1)
		rotate_a(a);
	pb_push_b(a, b);
	sort_three_custom(a, b);
	full_push_a(a, b, b.size[0]);
}

void	little_sort(t_stack a, t_stack b)
{
	if (a.size[0] == 2)
		sort_two(a);
	else if (a.size[0] == 3)
		sort_three(a);
	else if (a.size[0] == 4)
		sort_four(a, b);
	else if (a.size[0] == 5)
		sort_five(a, b);
	return ;
}
