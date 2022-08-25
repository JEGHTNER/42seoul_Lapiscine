/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:56:03 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/25 12:00:31 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_is_negative(int n)
{
	char N;
	char P;
	if(n<0)
	{	N='N';
		write(1,&N,1);
	}
else
	{
		P='P';
		write(1,&P,1);
	 }
}

int main()
{
	ft_is_negative(10);
	ft_is_negative(-10);
	ft_is_negative(NULL);
}
