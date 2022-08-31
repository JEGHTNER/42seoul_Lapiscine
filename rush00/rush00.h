/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:46:59 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/27 14:53:32 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH.h
#define RUSH.h
	f
void	check(int x, int y, int i, int j)
{
	if ((i == 1 || i == y) && (j == 1 || j == x))
		ft_putchar('o');
	else if (i == 1 || i == y)
		ft_putchar('-');
	else if (j == 1 || j == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			check(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

#endif
