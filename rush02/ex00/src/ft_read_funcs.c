/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <bresanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:14:20 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/01 10:45:58 by bresanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/file.h>

int	get_num_lines(int fd)
{
	int		count;
	int		r_status;
	char	c;

	count = 0;
	r_status = 1;
	while (r_status > 0)
	{
		r_status = read(fd, &c, 1);
		if (c == '\n' || r_status == 0)
		{
			count++;
		}
	}
	return (count);
}

void	read_ln(char *buff, int size, int fd)
{
	int	i;
	int	r_status;

	i = 0;
	r_status = 1;
	while (i < size && r_status > 0)
	{
		r_status = read(fd, &buff[i], 1);
		if (r_status == -1)
		{
			_exit(1);
		}
		if (r_status == 0)
		{
			break ;
		}
		if (buff[i] == '\n')
		{
			buff[i] = '\0';
			break ;
		}
		i++;
	}
}
