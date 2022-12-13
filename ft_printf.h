/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:40:55 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/12/12 17:19:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>

int		ft_printf(char const *tyle, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnmb(int n);
int		ft_printunmb(unsigned int n);
int		ft_printhex(unsigned long n, char c);
int		ft_printpnt(void *str);

#endif
