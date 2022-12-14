/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:57:57 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 21:58:49 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

long long	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ptr_i(char *str, int *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	check_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || \
			(base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long long	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	long long	result;
	long long	len;
	int			check;

	result = 0;
	sign = 1;
	i = ptr_i(str, &sign);
	check = check_valid(base);
	len = ft_strlen(base);
	if (check == 1)
	{
		while (get_index(str[i], base) != -1)
		{
			result *= len;
			result += get_index(str[i], base);
			i++;
		}
	}
	return (result * sign);
}
