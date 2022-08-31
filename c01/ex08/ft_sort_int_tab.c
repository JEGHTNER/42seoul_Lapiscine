/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:53:50 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/29 21:04:37 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *arr, int n1, int n2)
{
	int	temp;

	temp = arr[n1];
	arr[n1] = arr[n2];
	arr[n2] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
//	int	temp;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		if (i != min)
			swap(tab, i, min);
		i++;
	}
}
