/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_variadic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 09:52:16 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_addv(t_vec3 dst, uint32_t len, ...)
{
	va_list	args;

	va_start(args, len);
	kdm_vec3_zero(dst);
	while (len--)
		kdm_vec3_add(dst, dst, va_arg(args, t_vec3));
	va_end(args);
}

void	kdm_vec3_mulv(t_vec3 dst, uint32_t len, ...)
{
	va_list	args;

	va_start(args, len);
	kdm_vec3_one(dst);
	while (len--)
		kdm_vec3_mul(dst, dst, va_arg(args, t_vec3));
	va_end(args);
}
