/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:53:57 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/13 14:45:04 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *arr)
{
	
}

int	put(int *arr, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (arr[i] == y || (i - x) * (i - x) == (arr[i] - y) * (arr[i] - y))
			return (0);
		i++;
	}
	return (1);
}

void	ten(int *arr, int *count, int x)
{
	int	y;

	if (x == 10)
	{
		print(arr);
		(*count)++;
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

	count = 0;
	ten(arr, &count, 0);
	return (count);
}
