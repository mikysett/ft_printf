/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:08:41 by msessa            #+#    #+#             */
/*   Updated: 2021/03/17 14:34:38 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include "../libft/libft/libft.h"
# include "ft_my_types.h"
# include "ft_number_printers.h"
# include "ft_printer.h"

int			ft_printf(const char *format, ...);
t_str_part	**ft_set_str(char *format);
bool		ft_set_args(va_list *ap, t_str_part *sp);
char		*ft_set_arg_flags(t_arg *arg, char *str);
char		*ft_set_arg_width(t_arg *arg, char *str);
char		*ft_set_arg_precision(t_arg *arg, char *str);
char		*ft_set_arg_lenmod(t_arg *arg, char *str);
char		*ft_set_arg_conv(t_arg *arg, char *str);
char		*ft_set_arg_type(t_arg *arg, char *str);
bool		ft_is_conv(char c);
void		ft_sp_lstadd_back(t_str_part **lst, t_str_part *new);
t_flags		ft_convert_flag(char c);
t_str_part	**ft_free_str_part(t_str_part **str_part);
void		ft_free_one_str_arg(t_str_part *str_part);
char		*ft_free_padding(char *padding);
int			ft_printer(t_str_part *sp);
bool		ft_get_arg_basic(va_list *ap, t_arg *arg);
bool		ft_get_arg_unsigned(va_list *ap, t_arg *arg);
bool		ft_get_arg_mix(va_list *ap, t_arg *arg);
bool		ft_get_arg_n(va_list *ap, t_arg *arg);
t_str_arg	ft_set_arg_c(t_str_part *sp);
t_str_arg	ft_set_arg_s(t_str_part *sp);
t_str_arg	ft_set_arg_d(t_str_part *sp);
t_str_arg	ft_set_arg_u(t_str_part *sp);
t_str_arg	ft_set_arg_x(t_str_part *sp);
t_str_arg	ft_set_arg_p(t_str_part *sp);

#endif
