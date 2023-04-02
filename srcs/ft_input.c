/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:59:23 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 22:36:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argv_to_split(int argc, char **argv)
{
	int			j;
	int			i;
	char		**pstr;

	j = 0;
	i = 1;
	pstr = (char **)malloc(sizeof(char *) * (argc));
	if (!pstr)
		return (NULL);
	while (j < argc - 1)
	{
		pstr[j] = argv[i];
		i++;
		j++;
	}
	pstr[j] = NULL;
	return (pstr);
}

char	**one_str_to_split(char *str)
{
	char	**pstr;

	pstr = ft_split(str, ' ');
	if (!pstr)
		return (NULL);
	return (pstr);
}

int	size_tab(char **ptrstr)
{
	int	j;

	j = 0;
	while (ptrstr[j] != NULL)
		j++;
	return (j);
}

int	*ft_split_to_int(int argc, char **argv)
{
	int		i;
	int		j;
	int		*tab;
	char	**ptrstr;

	i = -1;
	j = 0;
	if (argc == 2)
		ptrstr = one_str_to_split(argv[1]);
	else
		ptrstr = argv_to_split(argc, argv);
	while (ptrstr[j] != NULL)
		j++;
	tab = (int *)malloc(sizeof(int) * j);
	if (!tab)
		return (0);
	while (++i < size_tab(ptrstr))
		tab[i] = ft_atoi(ptrstr[i]);
	if (argc == 2)
		free_ptr(ptrstr);
	else
		free(ptrstr);
	return (tab);
}

int	*ft_input(int argc, char **argv)
{
	return (ft_split_to_int(argc, argv));
}
/*
int	main(int argc, char **argv)
{
	int	*tab = ft_intput(argc, argv);
	int	n = size_tab(argc, argv);
	int	i = 0;
	while (i < n)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
