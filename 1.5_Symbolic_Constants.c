/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.5_Symbolic_Constants.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:14:25 by jaaaron           #+#    #+#             */
/*   Updated: 2018/09/14 12:16:48 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define		LOWER 0		/* lower limit of table */
#define 	UPPER 300	/* upper limit */
#define		STEP  20	/* step size */

main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
