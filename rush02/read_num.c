/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:23:47 by seycheon          #+#    #+#             */
/*   Updated: 2022/09/11 11:49:49 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
int size_of_arr(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != 0)
			size++;
		i++;
	}
	return (size);
}

int str_len_not_zero(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void fill_arr(char *dest, char c, int i, int size)
{
	int j;

	dest[0] = c;
	j = 1;
	while (j < size - i)
	{
		dest[j] = '0';
		j++;
	}
	dest[j] = '\0';
}

char **read_num(char *str)
{
	char **arr;
	int size;
	int i;
	int j;

	size = str_len_not_zero(str);
	arr = (char **)malloc(sizeof(char *) * (size_of_arr(str) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != '0')
		{
			arr[j] = (char *)malloc(sizeof(char) * (size - i + 1));
			if (!arr[j])
				return (0);
			if ((size - i) == 2)
			{
				if (str[i] == '1')
				{
					arr[j][0] = str[i];
					arr[j][1] = str[i + 1];
					arr[j][2] = '\0';
					printf("%s\n",arr[j]);
					printf("%s\n",arr[j]);

					//return(arr);
					break;
				}
			}
			fill_arr(arr[j], str[i], i, size);
			printf("%s\n",arr[j]);
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}