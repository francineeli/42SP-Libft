/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:18:28 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/16 18:33:04 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

static int    absolute(int n)
{
    if (n < 0)
        n = n * (-1);
    return (n);
}

static    void    convert(char *num, int n, size_t size)
{
    num[size] = '\0';
    size--;
    if (n >= 0)
    {
        while (size)
        {
            num[size] = (n % 10) + '0';
            n = n / 10;
            size--;
        }
        num[size] = n + '0';
    }
    else
    {
        while (size)
        {
            num[size] = absolute(n % 10) + '0';
            n = n / 10;
            size--;
        }
        num[size] = '-';
    }
}

char    *ft_itoa(int n)
{
    size_t	size;
    char	*num;
    int		aux;

    if (n >= 0)
        size = 1;
    else
        size = 2;
    aux = n / 10;
    while (aux)
    {
        size++;
        aux = aux / 10;
    }
    num = (char *)malloc(size + 1);
    if (num == NULL)
        return (NULL);
    else
        convert(num, n, size);
    return (num);
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
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char *res = ft_itoa(0);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 2)
	{
		char *res = ft_itoa(9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 3)
	{
		char *res = ft_itoa(-9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 4)
	{
		char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 5)
	{
		char *res = ft_itoa(-10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 6)
	{
		char *res = ft_itoa(8124);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 7)
	{
		char *res = ft_itoa(-9874);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 8)
	{
		char *res = ft_itoa(543000);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 9)
	{
		char *res = ft_itoa(-2147483648LL);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 10)
	{
		char *res = ft_itoa(2147483647);
		ft_print_result(res);
		free(res);
	}
	return (0);
}
