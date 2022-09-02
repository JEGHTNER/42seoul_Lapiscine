/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:31:54 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/02 21:06:22 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (sign == 0)
				str[i] -= 32;
			sign = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			sign = 1;
		else
			sign = 0;
		i++;
	}
	return (str);
}
