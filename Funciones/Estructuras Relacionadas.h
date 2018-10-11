#ifndef ESTRUCTURAS_RELACIONADAS_H_INCLUDED
#define ESTRUCTURAS_RELACIONADAS_H_INCLUDED

//Funciones series (Estructura que tiene campo que va a aparecer en la otra estructura. Primero tiene que darse de alta esta estructura)
/** \brief Funcion que inicializa en 0 los estados de la estructura
 *
 * \param eSerie[] Estructura a inicializar
 * \param int Tamaño de la estructura
 * \return void
 *
 */
void inicializarSeriesEstado(eSerie[], int);

/** \brief Funcion que carga datos en la estructura
 *
 * \param eSerie[] Estructura a la que se le cargaran los datos
 * \return void
 *
 */
void inicializarSeriesHardCode(eSerie[]);

/** \brief Funcion que busca un indice libre en los estados de la estructura y retorna el indice libre que encuentra
 *
 * \param eSerie[] Estructura en la que se busca un lugar libre
 * \param serieLenght int Tamaño de la estructura que se va a analizar
 * \return int Retorna el indice libre que encuentra
 *
 */
int series_BuscarLibre(eSerie[],int serieLenght);


/** \brief Funcion que da de alta una serie
 *
 * \param eSerie[] Estructura en donde se va a dar de alta la serie
 * \param serieLenght int Tamaño de la estructura serie
 * \param indice int Indice libre en donde se va a guardar la serie
 * \return void
 *
 */
void series_Alta(eSerie[],int serieLenght,int indice);

/** \brief Funcion que lista las series y sus datos
 *
 * \param eSerie[] Estructura serie que se va a mostrar
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void series_mostrarLista(eSerie[],int serieLenght);

/** \brief Funcion que permite modificar el nombre de la serie
 *
 * \param serie[] eSerie Estructura donde esta la serie que se va a modificar
 * \param serieLenght int Tamaño de la estructura a modificar
 * \return void
 *
 */
void series_modificarNombre(eSerie serie[],int serieLenght);

/** \brief Funcion que permite modificar el genero de la serie
 *
 * \param serie[] eSerie Estructura en donde se encuentra la serie a la que se le modificara el genero
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void series_modificarGenero(eSerie serie[],int serieLenght);

/** \brief Funcion que permite modificar la cantidad de temporadas de una serie
 *
 * \param serie[] eSerie Estructura en donde se encuentra la serie a la que se le modificara la cantidad de temporadas
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void series_modificarTemporadas(eSerie serie[],int serieLenght);

/** \brief Menu que da la opcion de modificar el nombre, el genero o la cantidad de temporadas de una serie
 *
 * \param serie[] eSerie Estructura que se modificara
 * \param serieLenght int Tamaño de la estructura a modificar
 * \return void
 *
 */
void series_modificar(eSerie serie[],int serieLenght);

/** \brief Funcion que dara de baja a una serie
 *
 * \param serie[] eSerie Estructura en donde esta la serie a dar de baja
 * \param serieLenght int Tamaño de la estructura serie
 * \return void
 *
 */
void series_darDeBaja(eSerie serie[],int serieLenght);



//Funciones usuarios (Estructura que se relaciona con otra estructura que tiene que existir previamente)

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

//Otros
/** \brief Funcion que muestra un menu principal y permite ejecutar el programa
 *
 * \param eUsuario[] Estructura perteneciente a las series
 * \param eSerie[] Estructura perteneciente a los usuarios
 * \param usuarioLenght int Tamaño de la estructura usuarios
 * \param serieLenght int Tamaño de la estructura series
 * \return void
 *
 */
void menu(eUsuario[],eSerie[],int usuarioLenght,int serieLenght);

#endif // ESTRUCTURAS_RELACIONADAS_H_INCLUDED
