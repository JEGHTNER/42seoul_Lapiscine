/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:03:40 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/11 10:32:00 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
char *cat_string(char *str1, char *str2)
{
    unsigned int i;
    char *result;

    result = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
    i = 0;
    while (*str1 != '\0')
    {
        result[i] = *str1;
        i++;
        str1++;
    }
    while(*str2 != '\0')
    {
        result[i] = *str2;
        i++;
        str2++;
    }
    result[i] = '\0';
    return (result);
}

/*
int main(int ac, char**av)
{
    char s1[]="./data/";
    char *s2;
    char *str;
    
    s2 = av[1];
    str = cat_string(s1,s2);
    printf("%s",str);
}
*/