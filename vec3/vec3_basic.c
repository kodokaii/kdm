/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_basic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:47:52 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

float	kdm_vec3_dot(t_vec3 a, t_vec3 b)
{
	return (a[X] * b[X] + a[Y] * b[Y] + a[Z] * b[Z]);
}

void	kdm_vec3_cross(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	dst[X] = a[Y] * b[Z] - a[Z] * b[Y];
	dst[Y] = a[Z] * b[X] - a[X] * b[Z];
	dst[Z] = a[X] * b[Y] - a[Y] * b[X];
}

void	kdm_vec3_crossn(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	kdm_vec3_cross(dst, a, b);
	kdm_vec3_normalize(dst);
}

float	kdm_vec3_norm(t_vec3 v)
{
	return (sqrtf(kdm_vec3_dot(v, v)));
}
