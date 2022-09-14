/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:53:57 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/14 08:08:56 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	put(int *arr, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (arr[i] == y || abs(i - x) == abs(arr[i] - y))
			return (0);
		i++;
	}
	return (1);
}

void	ten(int *arr, int *count, int x)
{
	int	y;
	int	i;

	if (x == 10)
	{
		i = 0;
		while (i < 10)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		(*count)++;
		ft_putchar('\n');
		return ;
	}
	y = 0;
	while (y < 10)
	{
		if (put(arr, x, y))
		{
			arr[x] = y;
			ten(arr, count, x + 1);
		}
		y++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	count;
	int	i;

	i = 0;
	while (i < 10)
		arr[i++] = -1;
	count = 0;
	ten(arr, &count, 0);
	return (count);
}
