/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:08:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/03 09:52:25 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		p_str = str;
		p_find = to_find;
		while (*p_str != '\0' && *p_find != '\0' && *p_str == *p_find)
		{
			p_str++;
			p_find++;
		}
		if (*p_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[7] = "Amanda";
	char	s2[3] = "ma";
	char	*r;

	r = strstr(s1, s2);
	printf("Org: %s\n", r);
	r = ft_strstr(s1, s2);
	printf("ft: %s\n", r);
	return (0);
}
*/