/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:59:53 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/05/05 14:59:56 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "utils/utils.h"

# define BUFFER_SIZE 128

typedef struct	s_fd
{
	int			fd;
	t_str		*str;
	struct s_fd	*next;
}				t_fd;

int				get_next_line(int fd, char **line);

t_fd			*find_fd(t_fd **list, int fd, int *new);

int				find_nl(t_str *str, char *sim_str);

int				read_file(t_str **str, char *buffer, int fd);

#endif
