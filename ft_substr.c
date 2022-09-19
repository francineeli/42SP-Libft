/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:15:29 by feli-bar          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/19 13:20:12 by feli-bar         ###   ########.fr       */
=======
/*   Updated: 2022/09/18 14:09:15 by feli-bar         ###   ########.fr       */
>>>>>>> b6528d033dca1d158edbdb964e185f70d4e0a370
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
<<<<<<< HEAD
	char	*dst;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len > len_s - start)
		len = len_s - start;
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (len_s > start)
	{
		while (s[start + i] && i < len)
=======
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
>>>>>>> b6528d033dca1d158edbdb964e185f70d4e0a370
		{
			dst[i] = s[start + i];
			i++;
		}	
	}		
	dst[i] = '\0';
	return (dst);
}
