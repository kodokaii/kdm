/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_variadic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 09:56:28 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2_addv(t_vec2 dst, uint32_t len, ...)
{
	va_list	args;

	va_start(args, len);
	kdm_vec2_zero(dst);
	while (len--)
		kdm_vec2_add(dst, dst, va_arg(args, t_vec3));
	va_end(args);
}

void	kdm_vec2_mulv(t_vec2 dst, uint32_t len, ...)
{
	va_list	args;

	va_start(args, len);
	kdm_vec2_one(dst);
	while (len--)
		kdm_vec2_mul(dst, dst, va_arg(args, t_vec3));
	va_end(args);
}
