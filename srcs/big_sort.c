/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:50:06 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 13:33:31 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compute_mb(int x, int p, int max_num)
{
	int	mb;

	mb = 0;
	while (p != -1)
	{
		if (max_num >= x)
		{
			max_num -= x;
			mb++;
		}
		else
		{
			mb++;
		}
		x /= 2;
		p--;
	}
	return (mb);
}

int	max_nb_bits(t_stack a)
{
	int	mb;
	int	max_num;
	int	p;
	int	x;

	p = 0;
	x = 1;
	max_num = a.size[0] - 1;
	while (x < max_num)
	{
		x *= 2;
		p++;
	}
	if (x != max_num)
	{
		x /= 2;
		p--;
	}
	mb = compute_mb(x, p, max_num);
	return (mb);
}

void	sort_first(t_stack a, t_stack b)
{
	int	i;
	int	j;
	int	bits;
	int	max_bits;

	i = 0;
	j = -1;
	bits = 0;
	max_bits = max_nb_bits(a);
	while (++j < max_bits)
	{
		while (i < a.size[0])
		{
			if (((a.tab[0] >> bits) & 1) == 0)
				pb_push_b(a, b);
			else
			{
				rotate_a(a);
				i++;
			}
		}
		full_push_a(a, b, b.size[0]);
		bits++;
		i = 0;
	}
}

void	big_sort(t_stack a, t_stack b)
{
	sort_first(a, b);
}

/*
//	TEST FONCTION MAX_BITS
int	main(void)
{
	t_stack	a;
	int	tab1[] = {501, 12, 0, 11, 1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
	int	size1[] = {1025};
	//int	i = 0;
	a.tab = tab1;
	a.size = size1;
	//while (i < a.size[0])
	//{
		//printf("a.tab[%d] = %d\n", i, a.tab[i]);
		//printf("max_bit = %d\n\n", max_bits(a));
		max_bits(a);
		//i++;
	//}
}*/
