/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:07:04 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/19 18:40:09 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_strlen(const char *s);

static int	ft_counter(const char *s, char c)
{
	int count;
	unsigned int i;
	char * result;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
			count++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;
	size_t len_s;
	size_t	i;
	
	i = 0;
	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len > len_s - start)
		len = len_s - start;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (len_s > start)
	{
		while (s[start + i] && i < len)
		{
			dst[i] = s[start + i];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);	
}
char **ft_split(char const *str, char c)
{
	int i;
	int j;
	int k;
	char **p;

	i = 0;
	j = 0;
	k = 0;
	p = (char **)malloc(sizeof(char*) * ft_counter(str, c)) + 1;
	if ( p == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
		{
			p[k] = ft_substr(str, j, i -j);
			i++;
			k++;
			j = i;
		}
		while (str[i] && str[i] != c)
			i++;
		if (!str[i])
		{
			p[k] = ft_substr(str, j, i -j);
			k++;
		}
	}
	p[k] = NULL;
	return (p);
}
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	**tabstr;
	int		i;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	i = 0;
	if ((arg = atoi(argv[1])) == 1)
	{
		if (!(tabstr = ft_split("          ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 2)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 3)
	{
		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 4)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 5)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 6)
	{
		if (!(tabstr = ft_split("", 'z')))
			ft_print_result("NULL");
		else
			if (!tabstr[0])
				ft_print_result("ok\n");
	}
	return (0);
}
