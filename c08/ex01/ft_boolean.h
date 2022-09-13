/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:42:57 by jehelee           #+#    #+#             */
/*   Updated: 2022/09/12 21:25:32 by jehelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum boolean
{
	false = 0,
	true = 1,
}	t_bool;

# define TRUE true 
# define FALSE false
# define SUCCESS 0
# define EVEN(nbr) nbr % 2 == 0
# define ODD_MSG "I have an odd number of arguments\n"
# define EVEN_MSG "I have an even number of arguments\n"

#endif