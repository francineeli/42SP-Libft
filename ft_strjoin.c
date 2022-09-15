/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:19:08 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/15 15:52:06 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	int		size;
	int		inc;
	int		total;

	size = 0;
	inc = 0;
	total = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc(len + 1);
	if (s1[size] == '\0' && s2[inc] == '\0')
		return (0x0);
	if (!str)
		return (0x0);
	if (str)
	{
		while (s1[size] != '\0')
			str[total++] = s1[size++];
		while (s2[inc] != '\0')
			str[total++] = s2[inc++];
	}	
	str[total + 1] = '\0';
	return (str);
}
