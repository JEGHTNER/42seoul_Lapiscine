/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 20:25:03 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/02 21:40:46 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <unistd.h>

void	ft_printdata(char *str, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

char	*ft_get_hex(char *str, unsigned int size)
{
	int		i;
	int		j;
	char	*hex;
	char	trans[2];
	char	*mem;

	mem = (char *)malloc(sizeof(char *) * 32);
	i = -1;
	j = 0;
	hex = (char *)"0123456789abcdef";
	while (++i < size)
	{
		mem[j] = hex[str[i] / 16];
		mem[j + 1] = hex[str[i] % 16];
		j += 2;
	}
	while (i++ < 16)
	{
		mem[j] = 32;
		mem[j + 1] = 32;
		j += 2;
	}
	return (mem);
	free(mem);
}

void	ft_get_addr(unsigned long long nb)
{
	char	*hex;
	char	addr[16];
	int		i;

	hex = (char *)"0123456789abcdef";
	i = 0;
	while (i < 16)
		addr[i++] = '0';
	i = 0;
	while (nb >= 1)
	{
		if (nb <= 16)
			addr[15 - i] = hex[nb % 16];
		addr[15 - i] = hex[nb % 16];
		nb /= 16;
		i++;
	}
	write(1, &addr, 16);
	write(1, ": ", 2);
}

void	ft_print_hex(char *str, unsigned int size)
{
	char	*mem;
	int		i;

	mem = ft_get_hex(str, size);
	i = 0;
	while (i < 8)
	{
		write(1, &mem[i * 4], 4);
		write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long	temp;
	unsigned int		cut_size;
	unsigned int		len;
	int					i;
	char				*string;

	i = 0;
	temp = (unsigned long long)addr;
	string = (char *)addr;
	cut_size = size;
	while (i < size)
	{
		if (size - i < 16)
			cut_size = size - i;
		else
			cut_size = 16;
		ft_get_addr(temp + i);
		ft_print_hex(string + i, cut_size);
		ft_printdata(string + i, cut_size);
		write(1, "\n", 1);
		i = i + 16;
	}
	return (0);
}
