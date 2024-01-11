/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_opperation2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/10 14:05:19 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2_mul(t_vec2 dst, t_vec2 a, t_vec2 b)
{
	dst[X] = a[X] * b[X];
	dst[Y] = a[Y] * b[Y];
}

void	kdm_vec2_scale(t_vec2 dst, t_vec2 v, float s)
{
	dst[X] = v[X] * s;
	dst[Y] = v[Y] * s;
}

void	kdm_vec2_scale_as(t_vec2 dst, t_vec2 v, float s)
{
	float	norm;

	norm = kdm_vec2_norm(v);
	if (norm)
		kdm_vec2_scale(dst, v, s / norm);
	else
		kdm_vec2_zero(dst);
}

void	kdm_vec2_div(t_vec2 dst, t_vec2 a, t_vec2 b)
{
	dst[X] = a[X] / b[X];
	dst[Y] = a[Y] / b[Y];
}

void	kdm_vec2_divs(t_vec2 dst, t_vec2 v, float s)
{
	dst[X] = v[X] / s;
	dst[Y] = v[Y] / s;
}
