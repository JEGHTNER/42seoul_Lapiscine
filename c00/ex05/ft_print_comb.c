/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:04:54 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/28 13:34:36 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];
	char	comma[2];

	arr[0] = '0';
	comma[0] = ',';
	comma[1] = ' ';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				write (1, &arr, 3);
				if (arr[0] != '7' || arr[1] != '8' || arr[2] != '9')
				{
					write (1, &comma, 2);
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}

int main()
{
	ft_print_comb();
}