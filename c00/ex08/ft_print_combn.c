/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:31:59 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/10 02:06:06 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char *arr, int n)
{
	int	i;
	int	last;

	i = 1;
	last = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			last = 0;
		i++;
	}
	if (last == 1)
	{
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		if (arr[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_init(char *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + '0';
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	arr[11];

	i = 0;
	while (i < n)
		arr[i++] = 0;
	while (arr[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(arr, n);
		arr[n - 1]++;
		i = n -1;
		while (i > 0 && n > 1)
		{
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			i--;
		}
	}
}

int main()
{
	ft_print_combn(3);
}
