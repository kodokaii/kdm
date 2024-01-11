/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:41:51 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3(t_vec3 dst, float *src)
{
	dst[X] = src[0];
	dst[Y] = src[1];
	dst[Z] = src[2];
}

void	kdm_vec3_set(t_vec3 dst, float s)
{
	dst[X] = s;
	dst[Y] = s;
	dst[Z] = s;
}

void	kdm_vec3_cpy(t_vec3 dst, t_vec3 src)
{
	dst[X] = src[X];
	dst[Y] = src[Y];
	dst[Z] = src[Z];
}

void	kdm_vec3_zero(t_vec3 v)
{
	v[X] = 0.0f;
	v[Y] = 0.0f;
	v[Z] = 0.0f;
}

void	kdm_vec3_one(t_vec3 v)
{
	v[X] = 1.0f;
	v[Y] = 1.0f;
	v[Z] = 1.0f;
}
