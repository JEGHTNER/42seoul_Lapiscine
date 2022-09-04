/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:18:13 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/05 01:00:02 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int n)
{
	write(1, &c, n);
}

int	is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*hex;
	unsigned char	*ustr;

	ustr = (unsigned char *)str;
	i = 0;
	hex = (unsigned char *) "0123456789abcdef";
	while (ustr[i])
	{
		if (!(ustr[i] >= ' ' && ustr[i] <= '~'))
		{
			write(1, &hex[ustr[i] / 16], 1);
			write(1, &hex[ustr[i] % 16], 1);
			write(1, "\\", 1);
		}
		else
			write (1, &ustr[i], 1);
		i++;
	}
}
