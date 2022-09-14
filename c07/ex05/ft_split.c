/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:19:31 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 22:00:44 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_string(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_sep(str[i], sep))
			i++;
	}
	return (count);
}

char	*make_string(char *str, char *sep)
{
	int		len;
	int		i;
	char	*new_str;

	len = 0;
	while (str[len] && !is_sep(str[len], sep))
		len++;
	new_str = (char *)malloc(sizeof(char) * ()len + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		j;
	int		string_num;

	string_num = count_string(str, charset);
	strings = (char **)malloc(sizeof(char *) * (string_num + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			strings[j] = make_string(&str[i], charset);
			j++;
		}
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	strings[j] = 0;
	return (strings);
}
