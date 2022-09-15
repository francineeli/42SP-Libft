/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:43:32 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/07 14:45:57 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	if (n == 0)
		return (0);
	while (s1[s] != '\0' && s2[s] != '\0' && n > s + 1)
	{
		if (s1[s] != s2[s])
			return (s1[s] - s2[s]);
		s++;
	}
	return (s1[s] - s2[s]);
}
