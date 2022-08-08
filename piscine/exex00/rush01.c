/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:44:17 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/23 12:51:54 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*dichiarare un intero che indica la dimensione dei lati del quadrato('n');
 * per ogni 'n' dato in input, c'e solo la possibilita' di scrivere la scala incrementata, da 1 a intero;
 * dichiarare un intero che indica 1('x'), cosicche ogni volta che viene rilevata 'n'venga scritto nella riga/colonna 'n'.
 * se viene dato in input 'n' e dal lato opposto non c'e 1, c'e un errore e si ferma con break.
 * se 'x' = 'n', controllare se nel lato opposto c'e x+1, allora scrivere n-1.
*/

#include <stdlib.h>
#include <malloc.h>

