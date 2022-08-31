/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:35:36 by jaeseule          #+#    #+#             */
/*   Updated: 2022/08/28 11:23:04 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_j(int i, int j, int x)
{
	if (i == 1)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 1)
			ft_putchar('C');
		else if (j == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	check_i(int i, int j, int x, int y)
{
	if (i == 1 || i == y)
	{	
		check_j(i, j, x);
	}
	else
	{
		if (j == 1 || j == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
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
			check_i(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
