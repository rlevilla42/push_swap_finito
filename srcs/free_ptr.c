/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:11:08 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/23 16:17:38 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_ptr(char **ptrstr)
{
	int	j;

	j = 0;
	while (ptrstr[j] != NULL)
	{
		free(ptrstr[j]);
		j++;
	}
	free(ptrstr);
}
