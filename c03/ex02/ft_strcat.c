/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:22:16 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/29 18:25:04 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[] = "Amor";
	char	s2[] = "";


	strcat(s1, s2);
	printf("Org: %s\n", s1);
	ft_strcat(s1, s2);
	printf("ft: %s\n", s1);
	return (0);
}
*/