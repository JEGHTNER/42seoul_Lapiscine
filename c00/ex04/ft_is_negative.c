/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:56:03 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/28 13:33:13 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	if (n < 0)
	{	
		neg = 'N';
		write (1, &neg, 1);
	}
	else
	{
		pos = 'P';
		write (1, &pos, 1);
	}
}

int main()
	{
		ft_is_negative('d');
		ft_is_negative(-1555);
		ft_is_negative(3000);
	}
