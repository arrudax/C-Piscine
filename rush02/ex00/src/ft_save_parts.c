/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_parts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <bresanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:19:06 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/01 15:38:17 by bresanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

void	init_array(char *buff, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		buff[i] = 0;
		i++;
	}
}

char	**ft_save_parts(char *number, int width)
{
	char	**ptr;
	int		i;
	int		size;

	ptr = malloc(sizeof(*ptr) * width);
	size = width + 1;
	i = 0;
	while (i < width)
	{
		ptr[i] = malloc(size);
		init_array(ptr[i], size);
		ptr[i][0] = number[i];
		size--;
		i++;
	}
	return (ptr);
}

void	ft_free_parts(char **ptr, int rows)
{
	rows = rows - 1;
	while (rows >= 0)
	{
		free(ptr[rows]);
		ptr[rows] = NULL;
		rows--;
	}
	ptr = NULL;
}
