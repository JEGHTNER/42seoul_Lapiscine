/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:49:38 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/31 16:52:01 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	if (!dest || !src)
		return (0);
	while (dest[i] && src[i])
	{
		if (i < src_len && i + 1 < size)
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	dest[i] = '\0';
	return (src_len);
}
