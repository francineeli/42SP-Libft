/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:51:42 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/18 14:12:40 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(const char *s, char c)
{
	int count;
	unsigned int i;
	char *result;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			count++;
		}
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count)
}
char	*ft_substr(char const *s, unsigned int start, size-t len)
{
	char *dst;
	size_t j;
	unsigned int end;

	j = 0;
	end = ft_strlen(s);
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL)
	if (start > end)
		start = end;		
	if (end > start && len > 0)
	{
		while (s[start] != '\0' && j != len && j < len)
		{		
			dst[i++] = s[start++];
		}
	}
	dst[i] = '\0';
	return (dst)
}
char	**ft_split(char const *str, char c)
{
	unsigned int i;
	int j;
	int k;
	char **p;

	i = 0;
	j = 0;
	k = 0;
	p = (char **) malloc(sizeof(char *) * ft_counter(str, c)
	if (p == NULL)
		return (NULL)
	while (str[i])
	{
		while(str[i] == c)
		{
			p[k] == ft_substr(str, j, i-j);
			i++;
			k++;
			j = i;
		}
		while (str[i] && str[i] != c)
			i++;
		if(!str[i])
		{
			p[k] = ft_substr(str, j, i-j);
		}
	}
	return (p);
}	
	


