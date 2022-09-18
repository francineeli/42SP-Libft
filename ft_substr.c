/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:15:29 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/18 14:09:15 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	size_t			j;
	unsigned int	end;

	j = 0;
	end = ft_strlen(s);
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL)
	if (start > end)
		start = end;
	if (end > start && len > 0)
	{	
		while (s[start] != '\0' && j != len && j < end)
		{
			dst[j++] = s[start++];
		}
	}	
	dst[i] = '\0';
	return (dst);
}
