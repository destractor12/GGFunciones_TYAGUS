#ifndef ARRAYS_PARALELOS_H_INCLUDED
#define ARRAYS_PARALELOS_H_INCLUDED

/** \brief Funcion que recorre los legajos buscando si hay uno vacio
 *
 * \param int[] Array que recorre para encontrar lugares vacios (O subindices en 0)
 * \param int Tamaño del array que debera recorrer
 * \return int Devuelve un index. Si encuentra un lugar libre, devuelve el indice correspondiente a ese lugar libre. Si no hay lugar libre devuelve -1
 *
 */
int buscarLibre(int[], int);

/** \brief Funcion que muestra legajo, nombre, nota 1, nota 2 y promedio de los alumnos
 *
 * \param int[] Legajo que se muestra
 * \param char[][20] Nombre del alumno
 * \param int[] Nota 1
 * \param int[] Nota 2
 * \param float[] Promedio
 * \param int Tamaño de los arrays
 * \return void Muestar los datos en pantalla
 *
 */
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);

/** \brief Funcion que toma ambas notas, calcula su promedio y lo retorna
 *
 * \param int Primera nota
 * \param int Segunda nota
 * \return float Retorna el promedio calculado
 *
 */
float calcularPromedio(int, int);

/** \brief Funcion que busca si hay un lugar libre y solicita el ingreso de los datos de los alumnos
 *
 * \param int[] Legajo que se ingresa
 * \param char[][20] Nombres que se ingresan
 * \param int[] Primera nota que se ingresa
 * \param int[] Segunda nota que se ingresa
 * \param float[] Promedio que se ingresa
 * \param int Tamaño de los arrays
 * \return int El indice donde se guardaron los datos
 *
 */
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

/** \brief Funcion que basandose que permite modificar el nombre y las notas
 *
 * \param int[] Legajo que se usara de parametro para modificar datos
 * \param char[][20] Nombre que se puede modificar
 * \param int[] Nota 1 que se puede modificar
 * \param int[] Nota 2 que se puede modificar
 * \param float[] Promedio que se actualiza cuando alguna de las notas es cambiada
 * \param int Tamaño de los arrays
 * \return float Retorna el promedio calculado nuevamente
 *
 */
float modificarAlumno(int[],char[][20],int[],int[],float[],int);

/** \brief Funcion que modifica cambiar un valor entero dentro de un array mediante le ingreso de un legajo
 *
 * \param mensajeMostrarDato[] char Mensaje que se le muestra al usuario al mostrar el dato
 * \param mensajePregunta[] char Mensaje que se le muestra al usuario cuando se le pregunta que dato quiere modificar
 * \param mensajePedirDato[] char Mensaje que se le muestra al usuario cuando se le pide que ingrese el dato
 * \param mensajeIncorrecto[] char Mensasje que se le muestra al usuario si el legajo ingresado es inexistente
 * \param array[] int Array que sera modificado
 * \param legajo[] int Legajo que se tomara de referencia para modificar un dato
 * \param tam int Tamaño del array a modificar
 * \return int Retorna el indice en el que esta el dato modificado
 *
 */
int cambiarEntero(char mensajeMostrarDato[],char mensajePregunta[],char mensajePedirDato[],char mensajeIncorrecto[],int array[],int legajo[],int tam);

/** \brief Funcion que modifica cambiar una cadena de caracteres dentro de un array mediante le ingreso de un legajo
 *
 * \param mensajeMostrarDato[] char Mensaje que se le muestra al usuario al mostrar el dato
 * \param mensajePregunta[] char Mensaje que se le muestra al usuario cuando se le pregunta que dato quiere modificar
 * \param mensajePedirDato[] char Mensaje que se le muestra al usuario cuando se le pide que ingrese el dato
 * \param mensajeIncorrecto[] char Mensasje que se le muestra al usuario si el legajo ingresado es inexistente
 * \param cadena[][20] char Array que sera modificado
 * \param legajo[] int int Legajo que se tomara de referencia para modificar un dato
 * \param tam int Tamaño del array a modificar
 * \return void
 *
 */
void cambiarCadena(char mensajeMostrarDato[],char mensajePregunta[],char mensajePedirDato[],char mensajeIncorrecto[],char cadena[][20],int legajo[],int tam);

/** \brief Funcion que comprueba si el legajo ingresado ya fue ingresado anteriormente
 *
 * \param legajo[] int Array legajo a ser analizada
 * \param tam int Tamaño del array
 * \param indice int Subindice del array legajo que se usa para comprobar si en el array ya hay un valor igual al de ese subindice
 * \return void
 *
 */
void comprobarLegajo(int legajo[],int tam,int indice);

/** \brief Funcion que invoca a la funcion mostrarAlumno y permite dar de baja a uno de ellos
 *
 * \param legajo[] int Legajo que se usara para dar de baja al alumno
 * \param nombre[][20] char Nombre que se mostrara
 * \param nota1[] int Nota1 que se mostrara
 * \param nota2[] int Nota2 que se mostrara
 * \param promedio[] float Promedio que se mostrara
 * \param tam int Tamaño de los arrays a recorrer
 * \return int Retorna el valor del array legajo en el subindice que se dio de baj
 *
 */
int darDeBaja(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam);

/** \brief Funcion que ordena los datos teniendo en cuenta el nombre ingresado alfabeticamente
 *
 * \param legajo[] int Legajo que va a ser ordenado segun el orden de los nombres
 * \param nombre[][20] char Nombre que sera ordenado de la A la Z
 * \param nota1[] int Nota1 que sera ordenada segun el orden de los nombres
 * \param nota2[] int Nota2 que sera ordenada segunu el orden de los nombres
 * \param promedio[] float Promedio que sera ordenado segun el orden de los nombres
 * \param tam int Tamaño de los arrays que se usara de parametro para ordenar los datos
 * \return void
 *
 */
void ordenarPorNombre(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam);

/** \brief Funcion que comprueba si la nota ingresada esta entre 1 y 10
 *
 * \param nota[] int Array del que se comprueba la nota
 * \param indice int Indice en el que esta guardado la nota
 * \return void
 *
 */
void comprobarNota(int nota[],int indice);

#endif // ARRAYS_PARALELOS_H_INCLUDED
