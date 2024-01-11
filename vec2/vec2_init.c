/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/10 13:42:39 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2(t_vec2 dst, float *src)
{
	dst[X] = src[0];
	dst[Y] = src[1];
}

void	kdm_vec2_set(t_vec2 dst, float s)
{
	dst[X] = s;
	dst[Y] = s;
}

void	kdm_vec2_cpy(t_vec2 dst, t_vec2 src)
{
	dst[X] = src[X];
	dst[Y] = src[Y];
}

void	kdm_vec2_zero(t_vec2 v)
{
	v[X] = 0.0f;
	v[Y] = 0.0f;
}

void	kdm_vec2_one(t_vec2 v)
{
	v[X] = 1.0f;
	v[Y] = 1.0f;
}
