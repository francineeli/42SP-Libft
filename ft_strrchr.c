/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:07:52 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/16 13:18:06 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (&(((char *)s)[i]));
		i--;
	}
	return (NULL);
}
