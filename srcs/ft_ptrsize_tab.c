/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrsize_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:30:09 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/21 22:37:25 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_ptrsize_tab(int argc, char **argv)
{
	int			j;
	char		**pstr;
	int			*size;

	size = (int *)malloc(sizeof(int) * 1);
	if (!size)
		return (NULL);
	j = 0;
	if (argc == 2)
		pstr = one_str_to_split(argv[1]);
	else
		pstr = argv_to_split(argc, argv);
	while (pstr[j] != NULL)
		j++;
	if (argc == 2)
		free_ptr(pstr);
	else
		free(pstr);
	size[0] = j;
	return (size);
}
/*
int main(int argc, char **argv)
{
	t_stack	a;

	a.size = ft_ptrsize_tab(argc, argv);
	ft_printf("%d\n", a.size[0]);
}*/
