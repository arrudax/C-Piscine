/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:01:41 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/05 18:07:07 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	line;
	int	str;

	line = argc - 1;
	while (line > 0)
	{
		str = 0;
		while (argv[line][str] != '\0')
		{
			write(1, &argv[line][str], 1);
			str++;
		}
		write(1, "\n", 1);
		line--;
	}
	return (0);
}
