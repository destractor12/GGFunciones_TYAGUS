#ifndef INPUTS_H_INCLUDED
#define INPUTS_H_INCLUDED

/** \brief Recibe un numero Flotante ingresado por el usuario y lo retorna
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param numeroIngresado float Numero flotante que ingresa el usuario
 * \return float El numero flotante ingresado por el usuario
 *
 */
float getFloat(char mensaje[],float numeroIngresado);

/** \brief Recibe un numero entero ingresado por el usuario (entre un minimo y un maximo), y lo retorna
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param A int Numero que ingresa el usuario
 * \param maximo int Numero maximo que puede ingresar el usuario
 * \param minimo int Numero minimo que puede ingresar el usuario
 * \return int El numero entero ingresado por el usuario
 *
 */
int getIntEntreMinimoYMaximo(char mensaje[], int enteroIngresado, int maximo, int minimo);

/** \brief Recibe un numero entero ingresado por el usuario y lo retorna
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param A int Numero que ingresa el usuario
 * \return int El numero entero ingresado por el usuario
 *
 */
int getInt(char mensaje[],int A);

/** \brief Recibe un caracter
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param caracter char Ingresado por el usuario
 * \return char Que ingreso el usuario
 *
 */
char getChar(char mensaje[], char caracter);

/** \brief Recibe dos numeros flotantes, los suma y muestra el resultado
 *
 * \param A float Primer numero ingresasdo por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float La suma de los dos numeros
 */
 /** \brief Funcion que permite la carga secuencial de datos dentro de un array
 *
 * \param indice int Indice del array
 * \param array[] int Array donde se guardaran los valores
 * \return int El array con los valores guardados
 *
 */
int cargaSecuencial(int indice, int array[]);

/** \brief Funcion que permite la carga aleatoria de datos dentro de un array
 *
 * \param indice int Indice del array
 * \param array[] int Array donde se guardaran los valores
 * \return int El array con los valores guardados
 *
 */
int cargaAleatoria(int indice, int array[]);

#endif // INPUTS_H_INCLUDED
