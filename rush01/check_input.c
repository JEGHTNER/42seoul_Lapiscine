/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:36:58 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/03 21:36:40 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int    ft_strlen(char *str)	//return length of str
{
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int    *ft_atoi(char *str, int *arr) // return pointer of str->int arranged array
{
    int    i;
    int     j;
    int    strlen;

    strlen=ft_strlen(str);
    i = 0;
    j = 0;
    
    while (i < strlen)						// '0' ~'9' -> 0 ~ 9 ex) str['4',' ','3'...] -> arr[4,3...]
    {
        if (str[i] >= '0' && str[i] < '9')
        {
            arr[j] = str[i] - '0';
            j++;
        }
            
        i++;
    }
    return (arr);
}

int    check_input(char *str, int n) // (입력값, n x n 사각형)
{
    int        i;
    int        j;
    int       num[32];    

    ft_atoi(str, num);
    i = 0;
    n = 4;
    while(i<n)	//top <-> bottom check i=0~3
        {
            if (num[i] + num[i+n] > n + 1 || num[i] + num[i+n] < 3)
                {
                    return (0);
                }
            i++;
        }
    i+=n;    //i = 4~7 skip
    while(i<n*3)	// left <-> right check i=8~11
          {
            if (num[i] + num[i+n] > n + 1 || num[i] + num[i+n] < 3)
                {
                    return (0);
                }
                i++;
          }
      

    return (1);
}
int main(int ac, char **av)
{
	int	n=4;
	int i=0;

	if(ac==2){
	if(check_input(av[1],n)==0)
      { 
            write(1,"error\n",6);
            return (0);
      }
		else
			write(1,"not error\n",10);
	}
	
}
/*
int main()
{
  char str[]="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 8";
        if(check_input(str,4)==0)
        { 
            write(1,"error",5);
            return (0);
        }
    }
*/

/* main 예시
 * int	main(int ac, char **av)
 * {
 *	int n=4;
 * 	if (ac==2)
 * 	{
 * 		if(check_input(av[1],n)==0)
 * 		{	write(1,"error",5);
 * 			return ;
 * 		else{
 * 				...
 * 			}
 */
