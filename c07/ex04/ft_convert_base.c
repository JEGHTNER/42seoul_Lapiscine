/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:16:56 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 21:58:52 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str);
int			check_valid(char *base);
long long	ft_atoi_base(char *str, char *base);

long long	len_count(long long nbr, char *base)
{
	int			len;
	long long	n;
	int			base_len;

	len = 0;
	n = nbr;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		n *= -1;
		len += 1;
	}
	while (n >= base_len)
	{
		n /= base_len;
		len += 1;
	}
	len++;
	return (len);
}

void	ft_itoa_base(long long nbr, char *base, char *num_arr)
{
	int			i;
	int			base_len;
	int			num_len;

	num_len = len_count(nbr, base);
	base_len = ft_strlen(base);
	i = 0;
	if (nbr < 0)
	{
		num_arr[0] = '-';
		nbr *= -1;
		i = 1;
	}
	num_arr[num_len] = '\0';
	num_len -= 1;
	while (nbr >= base_len)
	{
		num_arr[num_len] = base[nbr % base_len];
		nbr /= base_len;
		num_len--;
	}
	if (nbr < base_len)
		num_arr[i] = base[nbr % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*after_num;
	long long	mid_num;

	if (check_valid(base_from) == 0 || check_valid(base_to) == 0)
		return (0);
	mid_num = ft_atoi_base(nbr, base_from);
	after_num = (char *)malloc(sizeof(char) * \
	(len_count(mid_num, base_to) + 1));
	if (!after_num)
		return (0);
	ft_itoa_base(mid_num, base_to, after_num);
	return (after_num);
}
