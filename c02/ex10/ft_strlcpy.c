/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:49:38 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/05 00:16:31 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i])
		{
			if (i < size -1)
				dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (i);
}
