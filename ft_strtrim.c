/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:41:36 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/16 16:17:06 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

static	size_t	get_chr(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	start = 0;
	end = 0;
	len = ft_strlen(&s1[start]);
	result = (char *) malloc(len + 1);
	if (s1 == NULL || set == NULL || !result)
		return (NULL);
	while ((s1[start] && get_chr(s1[start], set) != '\0'))
		start++;
	while ((s1[end] && get_chr(s1[len - 1], set) != '\0'))
		len--;
	while (start < len)
			result[end++] = s1[start++];
	result[start] = 0;
	return (result);
}
