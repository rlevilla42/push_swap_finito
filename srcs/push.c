/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:26:51 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 22:59:21 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aff_a(t_stack a)
{
	int	i;

	i = 0;
	ft_printf("a.size[0] = %d\n\n", a.size[0]);
	while (i < a.size[0])
	{
		ft_printf("a.tab[%d] = %d\n", i, a.tab[i]);
		i++;
	}
	ft_printf("\n");
}

void	aff_b(t_stack b)
{
	int	i;

	i = 0;
	ft_printf("b.size[0] = %d\n\n", b.size[0]);
	if (b.size[0] == 0)
	{
		ft_printf("b.tab[%d] = %d\n", i, b.tab[i]);
		return ;
	}
	while (i < b.size[0])
	{
		ft_printf("b.tab[%d] = %d\n", i, b.tab[i]);
		i++;
	}
	ft_printf("\n");
}

void	stack_who_push(t_stack a)
{
	int	i;

	i = 0;
	while (i < a.size[0])
	{
		a.tab[i] = a.tab[i + 1];
		i++;
	}
	a.tab[i] = 0;
	a.size[0] -= 1;
}

void	pa_push_a(t_stack a, t_stack b)
{
	int	i;

	i = a.size[0] - 1;
	if (b.size[0] == 0)
		return ;
	ft_printf("pa\n");
	if (a.size[0] == 0 || a.size[0] == 1)
	{
		if (a.size[0] == 1)
			a.tab[1] = a.tab[0];
		a.tab[0] = b.tab[0];
		a.size[0] += 1;
		stack_who_push(b);
		return ;
	}
	while (i >= 0)
	{
		a.tab[i + 1] = a.tab[i];
		i--;
	}
	a.tab[0] = b.tab[0];
	a.size[0] += 1;
	stack_who_push(b);
	return ;
}

void	pb_push_b(t_stack a, t_stack b)
{
	int	i;

	i = b.size[0] - 1;
	if (a.size[0] == 0)
		return ;
	ft_printf("pb\n");
	if (b.size[0] == 0 || b.size[0] == 1)
	{
		if (b.size[0] == 1)
			b.tab[1] = b.tab[0];
		b.tab[0] = a.tab[0];
		b.size[0] += 1;
		stack_who_push(a);
		return ;
	}
	while (i >= 0)
	{
		b.tab[i + 1] = b.tab[i];
		i--;
	}
	b.size[0] += 1;
	b.tab[0] = a.tab[0];
	stack_who_push(a);
	return ;
}
/*
int	main(void)
{
	t_stack a;
	t_stack b;
	int	tab1[] = {9, 2, 3, 0, 667};
	int	size1[] = {5};
	a.tab = tab1;
	a.size = size1;
	int	*tab2 = (int *)malloc(sizeof(int) * a.size[0]);
	b.tab = tab2;
	
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	ft_printf("a.size[0] = %d\n", a.size[0]);
	aff_a(a);
	pb_push_b(a, b);
	aff_b(b);
	aff_a(a);
	ft_printf("FINITO AU SUIVANT\n\n");
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
	pa_push_a(a, b);
	aff_a(a);
	aff_b(b);
}
*/
/*
int 	main(void)
{
	int	tab1[10] = {9, 2, 0, 1, 3};
	int	tab2[45] = {14, 35, 99, 1, 458, 12, -1};
	
	//int	*tab2 = malloc(sizeof(int) * (ft_tabsize(tab1) + 1));
	ft_putint(tab1, 5);
	ft_printf("tab1[bonus 5] = %d\n", tab1[5]);
	ft_printf("tab1[bonus 6] = %d\n", tab1[6]);
	ft_printf("tab1[bonus 7] = %d\n", tab1[7]);
	ft_printf("\n");
	ft_putint_str(tab2);
	ft_printf("tab2[bonus 6] = %d\n", tab2[6]);
	ft_printf("tab2[bonus 7] = %d\n", tab2[7]);
	pb_push_b(tab1, tab2, 5);
	ft_putint(tab1, 5);
	ft_printf("tab1[bonus 6] = %d\n", tab1[6]);
	ft_printf("tab1[bonus 7] = %d\n", tab1[7]);
	ft_printf("tab1[bonus 8] = %d\n", tab1[8]);
	ft_printf("\n");
	ft_putint_str(tab2);
	ft_printf("tab2[bonus 7] = %d\n", tab2[7]);
	ft_printf("tab2[bonus 8] = %d\n", tab2[8]);

}*/
