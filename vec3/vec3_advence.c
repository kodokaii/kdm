/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_advence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/16 12:15:06 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_rotate(t_vec3 dst, t_vec3 v, float angle, t_vec3 axis)
{
	t_vec2	rotate;
	t_vec3	axis_n;
	t_vec3	vx;
	t_vec3	vy;
	t_vec3	vz;

	rotate[X] = cosf(angle);
	rotate[Y] = sinf(angle);
	kdm_vec3_normalize_to(axis_n, axis);
	kdm_vec3_scale(vx, v, rotate[X]);
	kdm_vec3_cross(vy, axis_n, v);
	kdm_vec3_scale(vy, vy, rotate[Y]);
	kdm_vec3_scale(vz, axis_n, kdm_vec3_dot(axis_n, v) * (1.0f - rotate[X]));
	kdm_vec3_addv(dst, 3, vx, vy, vz);
}

void	kdm_vec3_center(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	kdm_vec3_add(dst, a, b);
	kdm_vec3_scale(dst, dst, 0.5f);
}

float	kdm_vec3_distance(t_vec3 a, t_vec3 b)
{
	t_vec3	difference;

	kdm_vec3_sub(difference, b, a);
	return (kdm_vec3_norm(difference));
}

void	kdm_vec3_lerp(t_vec3 dst, t_vec3 to, float s, t_vec3 from)
{
	t_vec3	difference;

	kdm_vec3_sub(difference, to, from);
	kdm_vec3_scale(difference, difference, s);
	kdm_vec3_add(dst, from, difference);
}
