/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:50:16 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/04 21:07:29 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	count_char;

	count_char = 0;
	while (str[count_char] != '\0')
	{
		write(1, &str[count_char], 1);
		count_char++;
	}
}
/*
void	ft_putstr(char *str);

int	main(void)
{	
	char str[] = "Hello";

	ft_putstr(str);
	return (0);
}
*/