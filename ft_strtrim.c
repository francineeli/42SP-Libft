/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:41:36 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/14 18:49:46 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

static	size_t	set_chr(char c, char const *ch)
{
	while (*ch)
	{
		if (*ch == c)
			return (1);
		ch++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;
	char	*result;

	start = 0;
	i = 0;
	len = ft_strlen(s1);
	result = (char *) malloc(len + 1);
	if (!s1[start] && !set && !result)
		return (NULL);
	while (s1[start] && set_chr(s1[start], set))
		start++;
	if (len != '\0')
	{
		while (len >= start && set_chr(s1[len - 2], set))
		len--;
	}
	while (start < len)
	{
		result[i++] = s1[start++];
	}
	result[start] = 0;
	return (result);
}
