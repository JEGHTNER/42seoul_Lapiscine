/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabyeon <dabyeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:10:55 by dabyeon           #+#    #+#             */
/*   Updated: 2022/08/28 17:19:29 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x, int y)
{
	int	j;

	j = 1;

	if (x < 1 || y < 1)
	{
		return ;
	}
	while (j <= x)
	{
		if (j == 1 || j == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		j++;
	}
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x < 1 || y < 1)
		return ;
	while (i <= y - 2)
	{
		j = 1;
		while (j <= x)
		{
			if (j == 1 || j == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	foot(int x, int y)
{
	int	j;

	j = 1;
	if (x < 1 || y < 2)
	{
		return ;
	}
	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	head(x, y);
	body(x, y);
	foot(x, y);
}
