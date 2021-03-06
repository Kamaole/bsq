/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_head.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 16:38:23 by rmatos            #+#    #+#             */
/*   Updated: 2016/08/01 16:43:12 by rmatos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEAD_H
# define BSQ_HEAD_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <time.h>

typedef struct		s_dynamic_result
{
	int				**num_grid;
	int				max_square_size;
	int				rows;
	int				cols;
	int				x_loc;
	int				y_loc;
	char			empty;
	char			obstacle;
	char			square;
}					t_dynamic_result;

void	set_num(t_dynamic_result *dyn_arr, char c , int x, int y);
t_dynamic_result *dynamic_array(char *buf);
int		get_min(int **dynamic, int x, int y);
t_dynamic_result	*set_qualities(char *buf);
int		get_xdimen(char *buf);
char	**get_grid(char *buf, int x, int y);
void	ft_putchar(char c);
void	print_result(t_dynamic_result *dyn_arr);
char	get_char(t_dynamic_result *dyn_arr, int x, int y);
int		is_big_square(t_dynamic_result *dyn_arr, int x, int y);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*buf_cat(char *buf1, char *buf2);


#endif
