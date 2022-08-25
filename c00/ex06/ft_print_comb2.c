/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:42:48 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/25 18:49:28 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void  ft_putchar(char c)
{
	write(1,&c,1);
}

void  ft_print(char *str)
{
   	int i;
    i=0;
  
  while(str[i]!='\0')
    {
    ft_putchar(str[i++]);
    }
}
void ft_show(int num)
{
  int fn;
  int sn;

  if(num>9)
  {
    fn=num/10 + '0';
    sn=num%10 + '0';
    ft_putchar(fn);
    ft_putchar(sn);
  }
  else
  {
    ft_putchar('0');
    ft_putchar(num+'0');
  }

}

void ft_print_comb2()
{
  int front;
  int back;
  front=0;
  while(front<=98)
    {
      back=front+1;
      while(back<=99)
        {
          ft_show(front);
          ft_putchar(' ');
          ft_show(back);
          if(front<98 || back<99)
          {
            ft_putchar(',');
            ft_putchar(' ');
          }

          back++;
        }
      front++;

    }

  }

int main(void)
{
  ft_print_comb2();
}

