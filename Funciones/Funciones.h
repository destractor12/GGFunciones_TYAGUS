#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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
 *
 */
float sumarDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los resta y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El resto de los dos numeros
 *
 */
float restarDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los divide (comprobando si el resultado es infinito) y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El cociente de la division
 *
 */
float dividirDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los multiplica y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El producto de la multiplicacion
 *
 */
float multiplicarDosNumeros(float A, float B);


/** \brief Recibe un numero entero, calcula su factorial y muestra el resultado
 *
 * \param A int Numero entero ingresado por el usuario
 * \return unsigned long long El factorial del entero
 *
 */
unsigned long long factorial(int A);

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

//FUNCIONES DE ARRAYS PARALELOS

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

#endif // FUNCIONES_H_INCLUDED
