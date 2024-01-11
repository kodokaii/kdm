/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_opperation2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:50:32 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_mul(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	dst[X] = a[X] * b[X];
	dst[Y] = a[Y] * b[Y];
	dst[Z] = a[Z] * b[Z];
}

void	kdm_vec3_scale(t_vec3 dst, t_vec3 v, float s)
{
	dst[X] = v[X] * s;
	dst[Y] = v[Y] * s;
	dst[Z] = v[Z] * s;
}

void	kdm_vec3_scale_as(t_vec3 dst, t_vec3 v, float s)
{
	float	norm;

	norm = kdm_vec3_norm(v);
	if (norm)
		kdm_vec3_scale(dst, v, s / norm);
	else
		kdm_vec3_zero(dst);
}

void	kdm_vec3_div(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	dst[X] = a[X] / b[X];
	dst[Y] = a[Y] / b[Y];
	dst[Z] = a[Z] / b[Z];
}

void	kdm_vec3_divs(t_vec3 dst, t_vec3 v, float s)
{
	dst[X] = v[X] / s;
	dst[Y] = v[Y] / s;
	dst[Z] = v[Z] / s;
}
