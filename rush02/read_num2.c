/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_num2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:23:47 by seycheon          #+#    #+#             */
/*   Updated: 2022/09/11 19:11:00 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
int	len_num(char *str) // 문자열 길이 세어줌. atoi로 읽은 후 새로 만들어준 num 문자열의 길이 세어줌.
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	fill_arr(char *dest, int i, int size) // hundred, thousand, million 등의 수를 배열에 넣을 때 사용 
{
	int	j;

	dest[0] = '1'; // 첫자리에 1 넣어주고
	j = 1;
	while (j < size - i) // 나머지 자리 모두 0 채워줌
	{
		dest[j] = '0';
		j++;
	}
	dest[j] = '\0';
}

int	size_of_arr(char *str, int size)
{
	int	i;
	int	flag;
	int	return_size;

	i = 0;
	return_size = 0;
	flag = 0;
	while (i < size)
	{
		if ((size - (i + 1)) % 3 == 0 && (size - i != 1)) // 일의 자리가 아니고 (i + 1)가 3으로 나누어 떨어지는 수
		{
			if (i > 0 && str[i - 1] == '1')
				flag = 1;
			if (flag == 0 && str[i] != '0') // '2000'이라고 하면 '2'가 들어갈 자리 만들어줌
				return_size += 1;
			if (i == 0 && str[i] != '0') // '2000'이라고 하면 '1000'이 들어갈 자리 만들어줌
				return_size += 1;
			else if 
				(!(str[i] == '0' && str[i - 1] == '0' && str[i - 2] == '0'))
					return_size += 1;
		}
		else if ((size - (i + 1)) % 3 == 2 && str[i] != '0')
			return_size += 2; // '200'이라고 하면 '2'와 '100'이 들어갈 자리 만들어줌
		else if ((size - (i + 1)) % 3 == 1 && str[i] == '1')
		{
			return_size += 1; // '12'라고 하면 '12'가 들어갈 자리 만들어줌
			if ((size - (i + 2)) % 3 != 0)
				i += 2; // '12' 일 경우 뒤의 문자까지 지나가도 되므로 i + 2
			else
				i += 1; // '12,000' 이라고 하면 12와 1000이 배열에 들어가야하므로 i + 1 해주고 넘겨줌 
			continue ;
		}
		else if ((size - (i + 1)) % 3 == 1 && str[i] != '0')
			return_size += 1; //
		else if ((size - (i + 1)) % 3 == 0 && str[i] != '0'
			&& (size - i == 1))
		{	
			return_size += 1;
			printf(" return_size 0_: %d, i : %d\n", return_size, i);
		}
		i++;
	}
	return (return_size);
}

void	malloc_arr(char **arr, char *str, int size, int i)
{
	int	j;
	int	flag;


	j = 0;
	while (i < size)
	{

    	if (str[0] == '0')
		{
			arr[j] = (char *)malloc(sizeof(char) * 2);
        	arr[j][0] = '0';
			arr[j][1] = '\0';
		}
		if ((size - (i + 1)) % 3 == 0 && (size - i != 1))
		{
			flag = 0;
			if (i > 0 && str[i - 1] == '1')
				flag = 1;
			if (flag == 0 && str[i] != '0')
			{
				arr[j] = (char *)malloc(sizeof(char) * 2);
				arr[j][0] = str[i];
				arr[j][1] = '\0';
				j++;
			}
			if (i == 0 && str[i] != '0')
			{
				arr[j] = (char *)malloc(sizeof(char) * (size - i + 1));
				fill_arr(arr[j], i, size);
				j++;
			}	
			else if (!(str[i] == '0' && str[i - 1] == '0' && str[i - 2] == '0'))
			{
				arr[j] = (char *)malloc(sizeof(char) * (size - i + 1));
				fill_arr(arr[j], i, size);
				j++;
			}
		}
		else if ((size - (i + 1)) % 3 == 2 && str[i] != '0')
		{
			arr[j] = (char *)malloc(sizeof(char) * 2);
			arr[j][0] = str[i];
			arr[j][1] = '\0';
			j++;
			arr[j] = (char *)malloc(sizeof(char) * 4);
			fill_arr(arr[j], size - 3, size);
			j++;
		}
		else if ((size - (i + 1)) % 3 == 1 && str[i] == '1')
		{
			arr[j] = (char *)malloc(sizeof(char) * 3);
			arr[j][0] = str[i];
			arr[j][1] = str[i + 1];
			arr[j][2] = '\0';
			j++;
			if ((size - (i + 2)) % 3 != 0)
				i += 2;
			else
				i += 1;
			continue ;
		}
		else if ((size - (i + 1)) % 3 == 1 && str[i] != '0')
		{
			arr[j] = (char *)malloc(sizeof(char) * 3);
			arr[j][0] = str[i];
			arr[j][1] = '0';
			arr[j][2] = '\0';
			j++;
		}
		else if ((size - (i + 1)) % 3 == 0 && str[i] != '0')
		{
			flag = 0;
			if (i > 0 && str[i - 1] == '1')
				flag = 1;
			if (flag == 0)
			{
				arr[j] = (char *)malloc(sizeof(char) * 2);
				arr[j][0] = str[i];
				arr[j][1] = '\0';
				j++;
			}
		}
		i++;
	}
	arr[j] = 0;
}

char	**read_num(char *str)
{
	char	**arr;
	int		size;
	int		i;

	size = len_num(str);
	arr = (char **)malloc(sizeof(char *) * (size_of_arr(str, size) + 1));
	printf("size_of_arr : %d \n", size_of_arr(str, size));
	i = 0;
	malloc_arr(arr, str, size, i);
	return (arr);
}
/*
int	main(void)
{
	char	**arr;
	int		i;

	arr = read_num("   ");
	i = 0;
	while (arr[i])
	{
		printf("s : %s\n", arr[i]);
		i++;
	}
}
*/