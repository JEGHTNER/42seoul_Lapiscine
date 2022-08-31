/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:01:12 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/29 20:16:26 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *arr, int n1, int n2)
{
	int	temp;

	temp = arr[n1];
	arr[n1] = arr[n2];
	arr[n2] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(tab, i, size - i -1);
		i++;
	}
}
