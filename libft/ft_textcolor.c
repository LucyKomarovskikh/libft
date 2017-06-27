/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textcolor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkomarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:08:42 by lkomarov          #+#    #+#             */
/*   Updated: 2016/12/08 12:19:25 by lkomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_textcolor(int attr, int fg, int bg)
{
	char	*seq;

	seq = ft_strdup("\033[0;30;40m");
	seq[2] = '0' + attr;
	seq[5] = '0' + fg;
	seq[8] = '0' + bg;
	ft_putstr(seq);
	free(seq);
}
