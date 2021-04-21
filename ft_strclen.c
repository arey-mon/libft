/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apreymon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:30:08 by apreymon          #+#    #+#             */
/*   Updated: 2021/04/21 20:55:18 by apolliner        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strclen(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}