#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAMANIO 100

typedef struct
{
    //Generica Usuario
    char nombre[TAMANIO][50];
    int Id;
    int estado;
}eGenericaUsuario;

#endif // FUNCIONES_H_INCLUDED

/** \brief Funcion que inicializa en 0 los estados de la estructura
 *
 * \param listado[] eGenericaUsuario Estructura a la que le inicializa el estado en 0
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void inicializarEstadosEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que precarga con datos las estructuras
 *
 * \param listado[] eGenericaUsuario Estructura a la que se va a cargar con datos
 * \param tamanio int Tamaño de la estructura que se va a cargar
 * \return void
 *
 */
void cargarHarcodeEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que muestra un menu principal con las opciones del programa e invoca al resto de las funciones
 *
 * \param listado[] eGenericaUsuario Estructura que se le pasa al resto de las funciones
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void menu(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que toma un string y lo valida
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param caracter[] char Array que va a guardar el string ingresado
 * \return char Retorna el string validado
 *
 */
char getString(char mensaje[], char caracter[]);

/** \brief Funcion que toma un entero y lo valida
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param A int Entero que va a guardar el valor ingresado
 * \return int Retorna el entero validado
 *
 */
int getInt(char mensaje[],int A);

/** \brief Recibe un numero Flotante ingresado por el usuario y lo retorna
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param numeroIngresado float Numero flotante que ingresa el usuario
 * \return float El numero flotante ingresado por el usuario
 *
 */
float getFloat(char mensaje[],float numeroIngresado);

/** \brief Funcion que toma un caracter y lo valida
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \param caracter char Caracter que va a guardar el input
 * \return char Caracter validado
 *
 */
char getChar(char mensaje[],char caracter);

/** \brief Funcion que hace mayusculas las primeras letras de los nombres o strings que se ingresen
 *
 * \param caracter[] char String a modificar
 * \return void
 *
 */
void stringToUpper(char caracter[]);

/** \brief Funcion que valida si el dato ingresado es un numero entero
 *
 * \param datoAValidar[] char Dato a validar que debe pasarse como string
 * \return int Retorna el entero ya validado
 *
 */
int validarStringEntero(char datoAValidar[]);

/** \brief Funcion que valida si el string ingresado es un string
 *
 * \param datoAValidar[] char Cadena a validar
 * \return char Retorna la cadena validada
 *
 */
char validarStringCadena(char datoAValidar[]);

/** \brief Funcion que valida si el caracter ingresado es un caracter
 *
 * \param datoAValidar char Caracter a validar
 * \return char Retorna el caracter validado
 *
 */
char validarStringCaracter(char datoAValidar);

/** \brief Funcion que valida si el dato ingresado es un numero flotante
 *
 * \param datoAValidar[] char Dato a validar que debe pasarse como string
 * \return float Retorna el flotante ya validado
 *
 */
float validarStringFloat(char datoAValidar[]);

/** \brief Funcion que le pregunta al usuario si desea continuar
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \return char Retorna la respuesta del usuario
 *
 */
char deseaContinuar(char mensaje[]);

/** \brief Funcion que da de alta a los usuarios
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a dar de alta a los usuarios
 * \param tamanio int Tamaño de la estructura
 * \param indice int Indice libre en el que se va a dar de alta al usuario
 * \return void
 *
 */
void altaEstructura(eGenericaUsuario listado[],int tamanio,int indice);

/** \brief Funcion que busca un estado libre para ingresar al usuario
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a buscar el estado libre
 * \param tamanio int Tamaño de la estructura
 * \return int Indice en donde se encuentra el primer estado libre
 *
 */
int buscarLibreEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que asigna automaticamente un Id a las nuevas altas
 *
 * \param listado[] eGenericaUsuario Estructura a la que se le asigna el ID
 * \param tamanio int Tamaño de la estructura
 * \return int Retorna el siguiente ID
 *
 */
int idAutoIncrementalEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que muestra un elemento dentro de una estructura de arrays
 *
 * \param listado[] eGenericaUsuario Estructura a mostrar
 * \param tamanio int Tamaño de la estructura
 * \param i int Subindice de la estructura que se va a mostrar
 * \return void
 *
 */
void mostrarUnoEstructura(eGenericaUsuario listado[],int tamanio,int i);

/** \brief Funcion que invoca a mostrarUno y muestra todos los elementos de la estructura
 *
 * \param listado[] eGenericaUsuario Estructura que se muestra
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void mostrarListaEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que le presenta al usuario un menu en el que le permite elegir que modificar
 *
 * \param listado[] eGenericaUsuario Estructura que se va a modificar
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void modificarEstructura(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que toma un Id ingresado por el usuario y lo compara con todos los ID pertenecientes a la estructura
 *
 * \param listado[] eGenericaUsuario Estructura con la que se comparara el ID ingresado
 * \param tamanio int Tamaño de la estructura
 * \param id int Id que ingresa el usuario
 * \return int El subindice en el que encontro el ID o -1 si no lo encontro
 *
 */
int buscarPorIdEstructura(eGenericaUsuario listado[],int tamanio,int id);

/** \brief Funcion que permite modificar un string dentro de una estructura
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a modificar el string
 * \param indice int Indice de la estructura en el que se va a modificar el string
 * \param caracter[] char Array de caracteres en donde se va a guardar el nuevo string ingresado
 * \return char Retorna el string modificado
 *
 */
char modificarStringEstructura(eGenericaUsuario listado[],int indice,char caracter[]);

/** \brief Funcion que permite modificar un entero dentro de una estructura
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a modificar el entero
 * \param indice int Indice de la estructura en el que se va a modificar el entero
 * \param dato int Variable que guarda el dato ingresado
 * \return int Retorna el entero modificado
 *
 */
int modificarEnteroEstructura(eGenericaUsuario listado[],int indice,int dato);

/** \brief Funcion que permite modificar un flotante dentro de una estructura
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a modificar el float
 * \param indice int Indice de la estructura en el que se va a modificar el float
 * \param dato float Variable que guarda el dato ingresado
 * \return float Retorna el flotante modificado
 *
 */
float modificarFlotanteEstructura(eGenericaUsuario listado[],int indice,float dato);

/** \brief Funcion que pide un ID al usuario para realizar una baja
 *
 * \param listado[] eGenericaUsuario Estructura en la que se va a dar de baja
 * \param tamanio int Tamaño de la estructura
 * \param mensaje[] char Mensaje que se va a mostrar al usuario preguntando si desea efectuar la baja
 * \return void
 *
 */
void darDeBajaEstructura(eGenericaUsuario listado[],int tamanio,char mensaje[]);

/** \brief Funcion que confirma si el usuario realmente quiere realizar la baja. Si es asi cambia el estado de la estructura por 2
 *
 * \param listado[] eGenericaUsuario Estructura a la que se va a realizar la baja
 * \param indice int Indice en la que se va a realizar la baja
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \return void
 *
 */
void borrarEntidadEstructura(eGenericaUsuario listado[],int indice,char mensaje[]);

/** \brief Funcion que ordena una estructura segun el criterio de ordenamiento que se requiera
 *
 * \param listado[] eGenericaUsuario Estructura a ordenar
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void ordenarSegunCriterio(eGenericaUsuario listado[],int tamanio);

/** \brief Funcion que muestra todos los usuarios dados de baja
 *
 * \param listado[] eGenericaUsuario Estructura que tiene los usuarios borrados a mostrar
 * \param tamanio int Tamaño de la estructura
 * \return void
 *
 */
void mostrarBorrados(eGenericaUsuario listado[],int tamanio);


/*
/** \brief Funcion que muestra dos estructuras relacionadas de manera 1 con 1
 *
 * \param listado[] eGenericaUsuario Primera estructura a mostrar
 * \param tamanio int Tamaño de la primera estructura
 * \param listado[] eGenericaEstructuraDos Segunda estructura a mostrar
 * \param tamanioEstructura2 int Tamaño de la segunda estructura
 * \return void
 *
 *
void mostrarUnoConUno(eGenericaUsuario listado[],int tamanio,eGenericaEstructuraDos listado[],int tamanioEstructura2);

/** \brief Funcion que muestra dos estructuras relacionadas de manera 1 con muchos
 *
 * \param listado[] eGenericaUsuario Primera estructura a mostrar (Uno)
 * \param tamanio int Tamaño de la primera estsructura
 * \param listado[] eGenericaEstructuraDos Segunda estructura a mostrar (Muchos)
 * \param tamanioEstructura2 int Tamaño de la segunda estructura
 * \return void
 *
 *
void mostrarUnoConMuchos(eGenericaUsuario listado[],int tamanio,eGenericaEstructuraDos listado[],int tamanioEstructura2);
*/
