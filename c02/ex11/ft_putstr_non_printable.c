/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:18:13 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/31 17:28:21 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;
	char	trans[2];

	i = 0;
	hex = "0123456789abcde";
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			trans[0] = hex[str[i] / 16];
			trans[1] = hex[str[i] % 16];
			write(1, &trans, 2);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
