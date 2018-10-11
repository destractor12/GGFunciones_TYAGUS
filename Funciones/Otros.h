#ifndef OTROS_H_INCLUDED
#define OTROS_H_INCLUDED

/** \brief Funcion que muestra en orden los valores de un array
 *
 * \param indice int Indice del array
 * \param array[] int Array que contiene los valores
 * \return void No retorna ningun valor
 *
 */
void mostrarArray(int indice, int array[]);

/** \brief Funcion que ordena de menor a mayor los valores de un array
 *
 * \param indice int Indice del array
 * \param array[] int Array que contiene los valores a ser ordenados
 * \return int Array con los valores ordenados
 *
 */
int ordenarArray(int indice, int array[]);

/** \brief determina si un valor esta o no dentro del array
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del valor encontrado
 *
 */
int buscarChar(char[],int,char);


/** \brief Funcion que cuenta cuantos valores pares conteiene un array
 *
 * \param int[] Array que contiene los numeros a comprobar
 * \param int Indice del array a analizar
 * \return int Retorna la cantidad de numeros pares que contiene el array
 *
 */
int contarPares(int[],int);

void menu(estructura estructura[],int estructuraLenght);

void inicializarHarcode(estructura estructura[]);

#endif // OTROS_H_INCLUDED
