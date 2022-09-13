/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 03:38:15 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 21:43:26 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(char **strings, int size, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	if (size == 1)
		return (ft_strlen(strings[0]) + 1);
	while (i < size - 1)
	{
		total_len += ft_strlen(strings[i]);
		total_len += ft_strlen(sep);
		i++;
	}
	total_len += ft_strlen(strings[i]);
	return (total_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
	total_len = ft_total_len(strs, size, sep);
	str = (char *)malloc(sizeof(char) * (total_len));
	if (!str)
		return (0);
	str[0] = 0;
	i = 0;
	while (i < size - 1)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
		i++;
	}
	str = ft_strcat(str, strs[i]);
	return (str);
}
