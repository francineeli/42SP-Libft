/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:25:42 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/07 16:27:04 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s;

	s = 0;
	while (dstsize < ft_strlen(dst))
	{
		dst[s] = src[s];
		s++;
	}
	while (s < dstsize)
	{
		dst[s] = '\0';
			s++;
	}
	return (ft_strlen(src));
}
