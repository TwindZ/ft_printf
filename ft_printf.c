/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlamoth <emlamoth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:41:19 by emlamoth          #+#    #+#             */
/*   Updated: 2023/01/24 10:47:54 by emlamoth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_convert(str, ++i, arg);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

// #include "stdio.h"
//
// int main()
// {
// 	char			str[20] = "";
// 	char			c = 'a';
// 	int				x = -125;
// 	unsigned int	u = 4294967295;
// 	int				count;
//
// 	count = ft_printf("POUCENT : %% STRING : %s CHAR : %c%c 
// 		INT: %d INT: %i U_INT : %u hexa : %x HEXA : %X PTR : %p\n", 
// 		str, c, c, x, x, u, u, u, &u);
// 	printf("\nnbr de char ft_printf :%d\n\n", count);
//
// 	count = printf("POUCENT : %% STRING : %s CHAR : %c%c 
// 		INT: %d INT: %i U_INT : %u hexa : %x HEXA : %X PTR : %p\n", 
// 		str, c, c, x, x, u, u, u, &u);
// 	printf("\nnbr de char printf :%d\n\n", count);
// }
//