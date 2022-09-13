/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 04:16:03 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/10 18:03:17 by seycheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include "ft_split.c"
#include "read_num2.c" // 숫자 배열을 읽어오는 파일. 42면 forty - two 와 같이 40 - 2 로 나눠져서 읽어야하므로. by seycheon
#include "ft_atoi.c"
#include "dictionary_name.c"
#include "print_dict.c"
#include "check_input.c"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;
	int	j;
	char *arr1;
	char *arr2;

	if(!(arr1 = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1))))
		return (0);
	if(!(arr2 = (char *)malloc(sizeof(char) * (ft_strlen(str2) + 1))))
		return(0);
	i = 0;
	j = 0;
	while(str1[i])
	{
		if (str1[i] >= '0' && str1[i] <= '9')
		{
			arr1[j] = str1[i];
			j++;
		}
		i++;
	}
	arr1[j] = 0;
	i = 0;
	j = 0;
	while(str2[i])
	{
		if (str2[i] >= '0' && str2[i] <= '9')
		{
			arr2[j] = str2[i];
			j++;
		}
		i++;
	}
	arr2[j] = 0;
	i = 0;
	while (arr1[i] || arr2[i])
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;				// 파일 디스크립터
	int		n;				// read 함수 반환값 : -1 일시 오류
	char	buf[4096];		//dictionary 읽어서 저장할 배열
	char 	**split;		//dictionary 에서 한줄씩 개행문자('\n')로 split후 저장
	char 	**sp;			//한 줄 씩 저장된 배열에서 다시 : 를 기준으로 왼쪽 오른쪽 구분
	char 	*num = av[1]; 	// 입력된 숫자
	char 	**arr_num; 		// 숫자 배열. 42이면 첫번쨰 배열에 40, 두번째 배열에 2가 저장됨. by seycheon
	int		i;
	int		j;

	if (ac == 2)
	{
	if(!check_input(av[1]))
		{
			ft_putstr("Error\n");
			return (0);
		}
	fd = open("./data/numbers.dict", O_RDWR); // 딕셔너리 오픈 fd < 0 이면 오류 3부터 할당
								   		// O_RDWR로 수정해줌. 읽기 전용이 아닌 읽고 수정 가능해야하므로.by seycheon
	n = read(fd, buf, 4096);	// fd에 저장된 파일을,buf배열에,4096만큼 읽음 // n에는 읽은 byte수 저장됨
	buf[n] = '\0';
	split = ft_split(buf, "\n"); // buf배열에서 '\n'으로 split
	arr_num = read_num(ft_atoi(num));// num을 배열로.by seycheon
	if (arr_num == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	j = 0;
	while (arr_num[j]) // 배열을 돌면서.by seycheon
	{
		i = 0;
		while (split[i])
		{
			sp = ft_split(split[i],":");// split 된 배열에서 ':'를 기준으로 split // sp[0] 은 ':' 왼쪽 sp[1] 은 ':' 오른쪽
			if(ft_strcmp(sp[0],arr_num[j]) == 0) // 입력된 str이 : 왼쪽 숫자와 같다면
				ft_putstr(sp[1]);		// : 오른쪽값 출력
			ft_freeall(sp);
			i++;
		}
		if (arr_num[j + 1] != 0)
			ft_putchar(' ');
		j++;
	}
	ft_freeall(split);
	ft_freeall(arr_num);
	if (fd < 0)
		return (-1);
	else
		return (1);
	close(fd);
}
	if (ac == 3)
	{
		check_input(av[2]);
		fd = open(cat_string("./data/",av[1]), O_RDWR); // 딕셔너리 오픈 fd < 0 이면 오류 3부터 할당
		if(fd < 0)										// // O_RDWR로 수정해줌. 읽기 전용이 아닌 읽고 수정 가능해야하므로.by seycheon
		{
			ft_putstr("Error\n");
			return (-1);
		}				   
		n = read(fd, buf, 4096);		   // fd에 저장된 파일을,buf배열에,4096만큼 읽음 // n에는 읽은 byte수 저장됨
		buf[n] = '\0';
		split = ft_split(buf, "\n");	   // buf배열에서 '\n'으로 split
		arr_num = read_num(ft_atoi(av[2]));  // num을 배열로.by seycheon
		if (arr_num == NULL)
		  {
			  write(1, "Error\n", 6);
			  return (0);
		  }
		j = 0;
		while (arr_num[j]) // 배열을 돌면서.by seycheon
		{
			i = 0;
			while (split[i])
			{
				sp = ft_split(split[i], ":");		   // split 된 배열에서 ':'를 기준으로 split // sp[0] 은 ':' 왼쪽 sp[1] 은 ':' 오른쪽
				if (ft_strcmp(sp[0], arr_num[j]) == 0) // 입력된 str이 : 왼쪽 숫자와 같다면
					printf("%s", sp[1]);			   // : 오른쪽값 출력
				ft_freeall(sp);
				i++;
			}
			if (arr_num[j + 1] != 0)
				ft_putchar(' ');
			j++;
		}
		ft_freeall(split);
		free(arr_num);
		printf("\n");
		if (fd < 0)
			return (-1);
		else
			return (1);
		close(fd);

	}
	else
		write(1,"Error\n",6);
	return (0);
}
