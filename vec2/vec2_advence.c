/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_advence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/10 18:20:25 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2_rotate(t_vec2 dst, t_vec2 v, float angle)
{
	t_vec2	rotate;

	rotate[X] = cosf(angle);
	rotate[Y] = sinf(angle);
	dst[X] = rotate[X] * v[X] - rotate[Y] * v[Y];
	dst[X] = rotate[Y] * v[X] + rotate[X] * v[Y];
}

void	kdm_vec2_center(t_vec2 dst, t_vec2 a, t_vec2 b)
{
	kdm_vec2_add(dst, a, b);
	kdm_vec2_scale(dst, dst, 0.5f);
}

float	kdm_vec2_distance(t_vec2 a, t_vec2 b)
{
	t_vec2	difference;

	kdm_vec2_sub(difference, b, a);
	return (kdm_vec2_norm(difference));
}

void	kdm_vec2_lerp(t_vec2 dst, t_vec2 to, float s, t_vec2 from)
{
	t_vec2	difference;

	kdm_vec2_sub(difference, to, from);
	kdm_vec2_scale(difference, difference, s);
	kdm_vec2_add(dst, from, difference);
}
