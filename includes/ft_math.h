/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 00:07:52 by home              #+#    #+#             */
/*   Updated: 2020/05/08 20:16:52 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

#include <stdio.h>

#include "math_structs.h"

void	point_fill(t_point *dest, int x, int y);
void	point_point(t_point *point);

void	rect_update(t_rect *self, void *change);
void	rect_fill(t_rect *dest, t_point *start, t_point *end);
void	rect_print(t_rect *rect);

#endif
