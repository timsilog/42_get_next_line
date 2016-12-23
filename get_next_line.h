/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 12:37:17 by tjose             #+#    #+#             */
/*   Updated: 2016/12/22 17:54:03 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# include "../libft/libft.h"
# include "fcntl.h"

typedef struct		s_files
{
	int				fd;
	char			*leftover;
	struct s_files	*next;
}					t_files;
int					get_next_line(const int fd, char **line);

#endif
