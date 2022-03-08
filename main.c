/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:32:36 by osallak           #+#    #+#             */
/*   Updated: 2022/03/08 15:38:29 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;//the first number
	b = 20;//the second
	printf("the value of a before the swap : %d\n", a);
	printf("the value of b before the swap : %d\n", b);
	printf("===================================\n");
	a = a + b;//a = 30
	b = a - b;//b = 30 - 20 = 10
	a = a - b;//a = 30 - 10 = 20
	printf("the value of a after the swap : %d\n", a);
	printf("the value of b after the swap : %d\n", b);
	return (0);
}
