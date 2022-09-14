/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:53:56 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/14 03:03:23 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int	get_min(int i, int j, int k)
{
	int	min;

	min = i;
	if (j <= min)
		min = j;
	if(k <= min)
		min = k;
	return (min);
}

int 	*dp(int	arr[10][10], int size_x, int size_y)
{
	struct map;
	int	max;
	int i;
	int j;
	int *save_index;

	i = 1;
	j = 1;
	max = 0;

	save_index = (int *)malloc(sizeof(int) * 2);
	if (!save_index)
		return (0);
	while (i < size_x) // arr.y
	{
		j = 1;
		while (j < size_y) // arr.x
		{
			if (arr[i][j] == 1)
			{
				arr[i][j] = get_min(arr[i - 1][j -1], arr[i][j - 1], arr[i - 1][j]) + 1;
			}
			if (max < arr[i][j])
			{
				max = arr[i][j];
				save_index[0] = i;
				save_index[1] = j;
			}
			j++;
		}
		i++;
	}
	return (save_index);
}

int main()
{
	int arr[10][10] = 
	{
		{0,1,0,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1,1,1},
		{0,1,1,1,1,1,1,1,1,1},
		{0,1,1,1,1,1,0,1,1,1},
		{0,1,1,1,0,1,1,1,1,1},
		{0,1,1,1,1,1,1,1,1,1},
		{0,1,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,1,1,1},
		{1,1,1,1,0,1,1,1,1,1}
	};


	int i =0;
	int j =0;
	int *max_index;
	

	max_index =	dp(arr,10,10);
	printf("max_index[0] = %d max_index[1]=%d\n",max_index[0],max_index[1]);

	int max_size = 3;
	i = 0;
	j = 0;
	while( i < 10)
	{
		printf("%d: ",i);
		j = 0;
		while(j < 10)
		{
			
			if (i >= (max_index[0] - max_size + 1) && i <=max_index[0] && (j >= (max_index[1] - max_size +1) && j <= max_index[1])) // i 는 i - 최대값+1 부터 최대값의 y좌표까지 && j는 j - 최대값 +1 최대값의 x좌표까지
				printf("x ");
			else 
				printf("%d ",arr[i][j]);
			j++;
		} 
		printf("\n");
		i++;
	}
}
