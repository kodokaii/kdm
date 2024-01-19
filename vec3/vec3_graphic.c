/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_graphic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/19 18:34:58 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_reflect(t_vec3 dst, t_vec3 vec, t_vec3 normal)
{
	t_vec3	direction;

	kdm_vec3_scale(direction, normal, 2 * kdm_vec3_dot(vec, normal));
	kdm_vec3_sub(dst, vec, direction);
}
