/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:56:43 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/25 11:19:50 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

int main()
{
	char b;
	char c;
	char a;
	a='a';
	b =c;
	c = 'c';
	ft_putchar(c);
	ft_putchar(b);
	ft_putchar('\n');
	ft_putchar(a+1);
}
