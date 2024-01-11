/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_basic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:48:16 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

float	kdm_vec2_dot(t_vec2 a, t_vec2 b)
{
	return (a[X] * b[X] + a[Y] * b[Y]);
}

float	kdm_vec2_cross(t_vec2 a, t_vec2 b)
{
	return (a[X] * b[Y] - a[Y] * b[X]);
}

float	kdm_vec2_norm(t_vec2 v)
{
	return (sqrtf(kdm_vec2_dot(v, v)));
}
