/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:31:59 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/05 12:33:45 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/*
#include<unistd.h>
void	recprint(char * arr, int i,int n)
{
	if(i > 9)
		return ;
	write(1, arr, n);
	arr[i]++;
	recprint(arr, i++, n);
}

void	ft_init(char *arr ,int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + '0';
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	int		k;
	char	arr[11];

	ft_init(arr, n);
	while (arr[0] <= 10 -n && n>=1)
	{
		arr[n-1]++;
		i = n;
		while(i > 1 && n > 1)
		{
			if(i>9)
			{
				
				
			}
		}

	

	}
}

int main()
{
	ft_print_combn(3);
}
*/