/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlamoth <emlamoth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:38:05 by emlamoth          #+#    #+#             */
/*   Updated: 2023/01/24 11:09:05 by emlamoth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char			str[20] = "";
	char			c = 'a';
	int				x = -125;
	unsigned int	u = 4294967295;
	int				count;

	count = ft_printf("POUCENT : %% STRING : %s CHAR : %c%c 
		INT: %d INT: %i U_INT : %u hexa : %x HEXA : %X PTR : %p\n", 
		str, c, c, x, x, u, u, u, &u);
	printf("\nnbr de char ft_printf :%d\n\n", count);

	count = printf("POUCENT : %% STRING : %s CHAR : %c%c 
		INT: %d INT: %i U_INT : %u hexa : %x HEXA : %X PTR : %p\n", 
		str, c, c, x, x, u, u, u, &u);
	printf("\nnbr de char printf :%d\n\n", count);
}
