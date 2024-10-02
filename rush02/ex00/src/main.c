/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <bresanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:40:20 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/01 22:29:45 by bresanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"
#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include <sys/file.h>

int	main(int argc, char *argv[])
{
	char	*dict_path;
	char	line[LN_SIZE];
	int		fd;

	dict_path = NULL;
	fd = open(DF_PATH, O_RDONLY);
	if (argc == 2)
	{
		if (ft_validated(argv[1]) == -1)
			return (-1);
		if (fd == -1)
		{
			write(1, "Dict Error\n", 12);
			return (0);
		}
		ft_read_ln(line, LN_SIZE, fd);
		ft_putstr(line);
	}
	else if (argc == 3)
	{
		if (ft_validated(argv[2]) == -1 || ft_parse_dict(argv[1]))
			return (-1);
	}
	return (0);
}
