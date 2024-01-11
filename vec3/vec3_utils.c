/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:51:08 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_negate(t_vec3 v)
{
	v[X] = -v[X];
	v[Y] = -v[Y];
	v[Z] = -v[Z];
}

void	kdm_vec3_negate_to(t_vec3 dst, t_vec3 v)
{
	dst[X] = -v[X];
	dst[Y] = -v[Y];
	dst[Z] = -v[Z];
}

void	kdm_vec3_normalize(t_vec3 v)
{
	float	norm;

	norm = kdm_vec3_norm(v);
	if (norm)
		kdm_vec3_divs(v, v, norm);
}

void	kdm_vec3_normalize_to(t_vec3 dst, t_vec3 v)
{
	float	norm;

	norm = kdm_vec3_norm(v);
	if (norm)
		kdm_vec3_divs(dst, v, norm);
	else
		kdm_vec3_zero(dst);
}
