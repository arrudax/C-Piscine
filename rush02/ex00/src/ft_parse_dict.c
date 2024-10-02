/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:27:12 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/02 10:23:56 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/file.h>
#include <stdio.h>
#include "../include/header.h"

int	ft_parse_dict(char *path)
{
	int		fd;
	char	line[LN_SIZE];

	fd = open(path, O_WRONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 12);
		return (0);
	}
	ft_read_ln(line, LN_SIZE, fd);
	printf("%s", line);
	return (1);
}
