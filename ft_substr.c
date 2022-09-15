/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:15:29 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/13 21:11:11 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (len <= 0 || len < start)
		return (0x0);
	if (!dst)
		return (0x0);
	dst = (char *) malloc(len + 1);
	while (s[start] != '\0')
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
