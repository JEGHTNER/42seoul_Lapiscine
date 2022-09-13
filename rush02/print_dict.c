/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:23:07 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/11 17:29:44 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int  i;
  i = 0;
  while(str[i])
	{
    if(str[i] == ' ')
      i++;
	  ft_putchar(str[i]);
	  i++;
	}
  return ;
}
