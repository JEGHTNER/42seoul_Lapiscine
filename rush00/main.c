/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:23:47 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/28 12:13:00 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(0,0);
	rush(-5,-5);
	rush(5, 3);
	ft_putchar('\n');
	rush(1,5);
	ft_putchar('\n');
	rush(5,1);
	ft_putchar('\n');
	rush(5,2);
	ft_putchar('\n');
	rush(4,4);
	ft_putchar('\n');
	rush(2,2);
	return (0);
}
