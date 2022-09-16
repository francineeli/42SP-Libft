/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:15:29 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/16 11:35:29 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	size_t			j;
	unsigned int	i;

	j = 0;
	i = ft_strlen(s);
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (start > i)
		start = i;
	if (!dst)
		return (NULL);
	if (i >= start && len != 0 && len <= i)
	{	
		while (s[start] != '\0' && j != len)
		{
			dst[j++] = s[start++];
		}
	}	
	dst[i] = '\0';
	return (dst);
}
