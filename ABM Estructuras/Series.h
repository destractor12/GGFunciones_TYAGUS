#ifndef SERIES_H_INCLUDED
#define SERIES_H_INCLUDED
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;
#endif // SERIES_H_INCLUDED
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
