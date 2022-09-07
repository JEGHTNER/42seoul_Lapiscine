/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:56:03 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/05 12:34:11 by jehelee          ###   ########seoul.kr  */
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
