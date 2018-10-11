#include"Series.h"
#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED
typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;


#endif // USUARIOS_H_INCLUDED
/** \brief Funcion que inicializa en 0 los estados de la estructura
 *
 * \param eUsuario[] Estructura a inicializar
 * \param int Tamaño de la estructura
 * \return void
 *
 */
void inicializarUsuariosEstado(eUsuario[], int);

/** \brief Funcion que carga datos en la estructura
 *
 * \param eUsuario[] Estructura a la que se le cargaran los datos
 * \return void
 *
 */
void inicializarUsuariosHardCode(eUsuario[]);

/** \brief Funcion que unifica la inicializacion de estados y la precarga de datos en dos estrcuturas
 *
 * \param eSerie[] Primer estructura
 * \param serieLenght int Largo de la primer estructura
 * \param eUsuario[] Segunda estructura
 * \param usuarioLenght int Largo de la segunda estructura
 * \return void
 *
 */
void preCargaHardcode(eSerie[],int serieLenght,eUsuario[],int usuarioLenght);

/** \brief Funcion que busca un indice libre en los estados de la estructura y retorna el indice libre que encuentra
 *
 * \param eUsuario[] Estructura en la que se busca un lugar libre
 * \param usuarioLenght int Tamaño de la estructura que se va a analizar
 * \return int Retorna el indice libre que encuentra
 *
 */
int user_BuscarLibre(eUsuario[],int usuarioLenght);

/** \brief Funcion que da de alta a un usuario y la serie que va a ver
 *
 * \param usuario[] eUsuario Estructura de usuario que se da de alta
 * \param serie[] eSerie Estructura serie que se relaciona con usuario
 * \param serieLenght int Tamaño de la estructura serie (Se usa para mostrar la lista de series)
 * \param indice int Indice libre en donde se va a guardar al usuario
 * \param indicador int Indicador que señala si hay series ingresadas previamente en el sistema
 * \return void
 *
 */
void user_AltaUsuario(eUsuario usuario[],eSerie serie[],int serieLenght,int indice,int indicador);

/** \brief Funcion que comprueba que la serie ingresada por el usuario exista
 *
 * \param usuario[] eUsuario Estructura que contiene al usuario
 * \param serie[] eSerie Estructura que contiene a la serie
 * \param serieLenght int Largo de la serie
 * \param indice int Indice en donde se guardo la serie
 * \return void
 *
 */
void user_comprobarSerieIngresada(eUsuario usuario[],eSerie serie[],int serieLenght,int indice);

/** \brief Funcion que lista los usuarios y sus datos
 *
 * \param usuario[] eUsuario Estructura usuario
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \return void
 *
 */
void user_mostrarUsuarios(eUsuario usuario[],int usuarioLenght);

/** \brief Contiene un menu que permite modificar nombre o serie
 *
 * \param usuario[] eUsuario Estructura usuario
 * \param serie[] eSerie Estructura serie
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void user_modificar(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght);

/** \brief Funcion que ingresando un Id permite modificar un entero
 *
 * \param usuario[] eUsuario Estructura usuario a la que pertenece el Id ingresado
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void user_modificarEntero(eUsuario usuario[],int usuarioLenght,int serieLenght);

/** \brief Funcion que permite modificar una cadena cuando se ingresa un Id de usuario
 *
 * \param usuario[] eUsuario Estructura usuario
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \return void
 *
 */
void user_modificarCadena(eUsuario usuario[],int usuarioLenght);

/** \brief Funcion que permite dar de baja a un usuario ingresando su Id
 *
 * \param usuario[] eUsuario Estructura en la que esta el usuario que se dara de baja usuario
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \return void
 *
 */
void user_darDeBaja(eUsuario usuario[],int usuarioLenght);

/** \brief Funcion que muestra cada usuario con la serie que ve
 *
 * \param usuario[] eUsuario Estructura que contiene los usuarios
 * \param serie[] eSerie Estructura que contiene las series
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void mostrarUsuarioConSuSerie(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght);

/** \brief Funcion que muestra las series con los usuarios que las ven
 *
 * \param usuario[] eUsuario Estructura que contiene los usuarios
 * \param serie[] eSerie Estructura que contiene las series
 * \param usuarioLenght int Tamaño de la estructura usuario
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void mostrarSerieConSuUsuario(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght);

/** \brief Funcion que comprueba si se ingreso una serie previamente antes de permitirle al usuario registrarse
 *
 * \param serie[] eSerie Estructura que se comprobara
 * \param serieLenght int Tamaño de la estructura
 * \return int Retorna -1 si no hay series ingresadas o 0 si hay series ingresadas
 *
 */
int chequearSiSeIngresoUnaSerie(eSerie serie[],int serieLenght);
