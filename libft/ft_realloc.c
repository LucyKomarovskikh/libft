/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkomarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 16:16:50 by lkomarov          #+#    #+#             */
/*   Updated: 2016/10/04 20:24:22 by lkomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char	*result;

	result = ft_memalloc(sizeof(char) * new_size);
	ft_memcpy(result, ptr, old_size);
	if (ptr)
		free(ptr);
	return (result);
}
