/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:07:57 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 19:10:40 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_matrix(char **matrix, int n);

int	size_of_square(char *str)
{
	int	len_arg;

	len_arg = 0;
	while (str[len_arg] != '\0')
	{
		len_arg++;
	}
	if (len_arg == 31 || len_arg == 39 || len_arg == 47
		|| len_arg == 55 || len_arg == 63 || len_arg == 71)
	{
		len_arg = (len_arg + 1) / 8;
		return (len_arg);
	}
	return (-1);
}

int	check_str_is_okay(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > '0') && (str[i] <= '9'))
		{
			if (str[i + 1] == '\0')
				return (1);
			if (str[i + 1] == 32)
				i += 2;
			else
				return (-1);
		}
		else
			return (-1);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	n;
	int	is_ok;

	if (ac != 2)
		return (1);
	is_ok = check_str_is_okay(av[1]);
	if (is_ok != 1)
		return (1);
	n = size_of_square(av[1]);
	if (n == -1)
		return (1);
/*	init_matrix();
 *	populate_matrix_zero();
 *	populate_if_n_in_str();
 *	populate_one_in_str();
 *
 *	to do - populate_ohters_mandatory_rules()
 *	      - rules check con matematica per trovare possibili opzioni
 *				quello (somma_max - somma_presenti)%spazi_vuoti (diff ecc)
 *	      - funz per check visioni corrette o meno
 *		
 *	INIZIA LA MAGGIAH
 *	0.	trovare prima casella con '0'
 *		1.	genera possibilita date casella non '0' in colonna
 *					- possibilita' si trovano con (tot - somma) && (caselle == '0')
 *				1a.	- malloc con possibilita in ordine
 *			2.	check ripetizioni (se col -> row, se row -> col)
 *				3.	check regola 1 (up or left)
 *					4.	check regola 2 (down or right)
 *						
 *			if (ok) -> ritorna a 1. con riga, partendo da prima casella compilata
 *			if (nok) --2./3./4.--> 1a. ovvero prova altra combinazione
 *						|
 *						---1a == empty--> return 1. uscendo dalla ricorsione
 *							ovvero andra a provare un'altra comb allo step 
 *							precedente. se e' il primo, si caga addosso e da
 *							errore visto che non ha soluzioni.
*/
	print_matrix(matrix, n);
	free
	return (0);
}
