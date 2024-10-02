/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:08:06 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/05 20:15:02 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int	current;
	int	next;

	current = 1;
	while (current < argc - 1)
	{
		next = current + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[next], argv[current]) < 0)
				ft_swap(&argv[next], &argv[current]);
			next++;
		}
		current++;
	}
	current = 1;
	while (current < argc)
	{
		write(1, argv[current], ft_strlen(argv[current]));
		write(1, "\n", 1);
		current++;
	}
	return (0);
}
