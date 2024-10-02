/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:20:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/27 12:48:28 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	result[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			result[0] = "0123456789abcdef"[(str[i] >> 4) & 0xf];
			result[1] = "0123456789abcdef"[str[i] & 0xf];
			write(1, "\\", 1);
			write(1, result, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
