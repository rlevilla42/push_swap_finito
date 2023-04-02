/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsize.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:11:08 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/23 16:17:38 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bsize(int argc, char **argv)
{
	int	*size;

	(void)argc;
	(void)argv;
	size = (int *)malloc(sizeof(int) * 1);
	size[0] = 0;
	return (size);
}
