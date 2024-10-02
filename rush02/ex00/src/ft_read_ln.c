/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_ln.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <bresanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:47:31 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/01 22:14:21 by bresanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/file.h>

void	ft_read_ln(char *buff, int size, int fd)
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
