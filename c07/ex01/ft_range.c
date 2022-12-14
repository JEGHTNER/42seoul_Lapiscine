/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:28:46 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 19:37:47 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (i < (size))
		arr[i++] = min++;
	return (arr);
}
