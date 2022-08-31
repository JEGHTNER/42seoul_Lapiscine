/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:30:45 by jehelee           #+#    #+#             */
/*   Updated: 2022/08/31 18:52:48 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_putstr_non_printable(char *str)
{
    int        i;
    int     j;
    char    *hex;
    char    trans[2];
    char    mem[48];

    i = 0;
    j = 0;
    hex = "0123456789abcde";
    while (str[i])
    {
        trans[0] = hex[str[i] / 16];
        trans[1] = hex[str[i] % 16];
        mem[j]=trans[0];
        mem[j+1]=trans[1];
        if(mem[j]!=mem[j+1]&&mem[j+1]==0)
        mem[j+1]=mem[j+1]+'0';
        i++;
        j+=2;
    }
    printf("%s\n",mem);
    //write(1,&mem,48);
    
}


int main() {
  ft_putstr_non_printable("Bonjour les amin");
return 0;
}