/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:01:17 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/28 11:45:43 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int x, int y, int i, int j)
{
	if ((i == 1 || i == y) && j == 1)
		ft_putchar('A');
	else if (j == x && (i == 1 || i == y))
		ft_putchar('C');
	else if (i == 1 || i == y || j == 1 || j == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
		return ;

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
