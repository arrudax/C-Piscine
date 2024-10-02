/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:47:15 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/05 20:11:43 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	line;
	int	str;

	line = 1;
	while (argc > 0 && line < argc)
	{
		str = 0;
		while (argv[line][str] != '\0')
		{
			write(1, &argv[line][str], 1);
			str++;
		}
		write(1, "\n", 1);
		line++;
	}
	return (0);
}
