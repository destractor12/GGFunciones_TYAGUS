#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int len);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/** \brief Funcion que inicializa todos los estados de una estructura como vacios
 *
 * \param lista[] EPersona Estructura que se va a inicializar como vacia
 * \return void
 *
 */
void inicializarEstados(EPersona lista[]);

/** \brief Funcion que previamente carga la estructura con usuarios
 *
 * \param lista[] EPersona Estructura que se va a cargar
 * \return void
 *
 */
void inicializarHarcode(EPersona lista[]);

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

/** \brief Funcion que permite agregar una persona al sistema
 *
 * \param lista[] EPersona Estructura en la que se va a almacenar la persona dada de agregada
 * \return void
 *
 */
void agregarPersona(EPersona lista[]);

/** \brief Estructura que, ingresando un DNI, permite dar de baja un usuario
 *
 * \param lista[] EPersona Estructura en la que se encuentra el usuario a dar de baja
 * \param flag int Bandera que valida si previamente se ingreso algun usuario para dar de baja
 * \return void
 *
 */
void borrarPersona(EPersona lista[],int flag);

/** \brief Funcion que lista por pantalla los usuarios y sus campos
 *
 * \param lista[] EPersona Estructura en la que estan los usuarios a mostrar
 * \return void
 *
 */
void mostrarLista(EPersona lista[]);

/** \brief Funcion que ordena por nombre los usuarios de la estructura
 *
 * \param lista[] EPersona Estructura que contiene los usuarios a ordenar
 * \param flag int Bandera que valida si previamente se ingreso algun usuario para ordenar
 * \return void
 *
 */
void ordenarListaPorNombre(EPersona lista[],int flag);

/** \brief Funcion que tomando las edades ingresadas realiza un grafico estadistico representandolas
 *
 * \param lista[] EPersona Estructura en la que se van a basar los datos del grafico
 * \return void
 *
 */
void imprimirGrafico(EPersona lista[]);
int main()
{
    printf("Hello world!\n");
    return 0;
}
int obtenerEspacioLibre(EPersona lista[],int len)
{
    int indice=-1;
    int i;
    for(i=0; i<len; i++)
    {
        if(lista[i].estado==0)
        {
            indice=i;
        }
    }
    return indice;
}

int buscarPorDni(EPersona lista[], int dni)
{
    int indice=-1;
    int i;
    for(i=0; i<20; i++)
    {
        if(dni==lista[i].dni)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void inicializarEstados(EPersona lista[])
{
    int i;
    for(i=0; i<20; i++)
    {
        lista[i].estado=0;
    }
}

void inicializarHarcode(EPersona lista[])
{
    char nombre[20][50]= {"Alberto","Jose","Maria","Pepe","Julian","Camila","Victoria","Selene","Juan Cruz","Nicolas","Franco","Ciro","Ezequiel","Emanuel","Alejandro","Matias","Carlos","Natan","David","Francisco"};
    int dni[20]= {42589785,23456978,10457863,32014756,42147544,52333457,24965784,30145965,29771276,16279490,14575887,10476685,16686238,41371597,10385485,41754221,19373276,4385555,10173055,3073077};
    int edad[20]= {15,25,12,100,97,3,46,92,24,96,43,83,25,89,41,79,97,37,21,28};
    int i;
    for(i=0; i<20; i++)
    {
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].edad=edad[i];
        lista[i].dni=dni[i];
        lista[i].estado=1;
    }
}

char getString(char mensaje[], char caracter[])
{

    printf("%s",mensaje);
    gets(caracter);
    fflush(stdin);
    caracter=validarStringCadena(caracter);
    return caracter;
}

int getInt(char mensaje[],int A)
{

    char auxstring[100];
    printf("%s",mensaje);
    gets(auxstring);
    fflush(stdin);
    A=validarStringEntero(auxstring);
    return A;
}

void stringToUpper(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0; i<largo; i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
    return caracter;
}

int validarStringEntero(char datoAValidar[])
{
    int A;
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0; i<validar;)
    {
        if(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ')
        {
            do
            {
                printf("\nIngresa un numero valido ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ');
        }
        else
        {
            i=i+1;
        }
    }
    A=atoi(datoAValidar);
    return A;
}

char validarStringCadena(char datoAValidar[])
{
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0; i<validar;)
    {
        if(isalpha(datoAValidar[i])==0&&datoAValidar[i]!=' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isalpha(datoAValidar[i])==0);
        }
        else if(datoAValidar[0]== ' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(datoAValidar[0]==' ');
        }
        else
        {
            i=i+1;
        }

    }
    return datoAValidar;
}

void agregarPersona(EPersona lista[])
{
    int indice;
    indice=obtenerEspacioLibre(lista);
    if(indice!=-1)
    {
        getString("Ingrese el nombre de la persona ",lista[indice].nombre);
        stringToUpper(lista[indice].nombre);
        lista[indice].edad=getInt("Ingresa la edad de la persona ",lista[indice].edad);
        lista[indice].dni=getInt("Ingresa el DNI de la persona ",lista[indice].dni);
        lista[indice].estado=1;
    }
    else
    {
        printf("\nNo hay mas lugares libres");
    }
}

void borrarPersona(EPersona lista[],int flag)
{
    int dni;
    int indice;
    int i;
    if(flag==1)
    {
        mostrarLista(lista);
        printf("\n¿Que persona queres borrar? (Ingresar DNI) ");
        scanf("%d",&dni);
        fflush(stdin);
        indice=buscarPorDni(lista,dni);
        if(indice!=-1)
        {
            lista[indice].estado=0;
            lista[indice].dni=0;
            strcpy(lista[indice].nombre,"");
            lista[indice].edad=0;
        }
        else
        {
            printf("\nDNI no encontrado");
        }
    }
    else
    {
        printf("\nPara borrar un usuario es necesario que se haya ingresado alguno en el sistema ");
    }


}

void mostrarLista(EPersona lista[])
{
    int i;
    for(i=0; i<20; i++)
    {
        if(lista[i].estado==1)
        {
            printf("\n\nNombre: %s\nEdad: %d\nDNI: %d",lista[i].nombre,lista[i].edad,lista[i].dni);
        }
    }
}


void ordenarListaPorNombre(EPersona lista[],int flag)
{
    EPersona auxiliar;
    int i;
    int j;
    if(flag==1)
    {
        for(i=0; i<19; i++)
        {
            for(j=i+1; j<20; j++)
            {
                if(lista[i].estado==1&&strcmp(lista[i].nombre,lista[j].nombre)>0)
                {
                    auxiliar=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxiliar;
                }
            }
        }
        mostrarLista(lista);
    }
    else
    {
        printf("\nPara realizar el ordenamiento es necesario que se haya ingresado algun usuario en el sistema ");
    }
}

void imprimirGrafico(EPersona lista[])
{
    int flag;
    int flagMenor18=0;
    int flagMas18=0;
    int flagMas35=0;
    int mayor;
    int i;
    for(i=0; i<20; i++)
    {
        if(lista[i].estado==1)
        {


            if(lista[i].edad<18)
            {
                flagMenor18=++flagMenor18;
            }
            else if(lista[i].edad>18&&lista[i].edad<=35)
            {
                flagMas18=++flagMas18;
            }
            else if(lista[i].edad>35)
            {
                flagMas35=++flagMas35;
            }
        }
    }
    if(flagMenor18>=flagMas18&&flagMenor18>=flagMas35)
    {
        mayor=flagMas18;
    }
    else if(flagMas18>=flagMenor18&&flagMas18>=flagMas35)
    {
        mayor=flagMas18;
    }
    else
    {
        mayor=flagMas35;
    }
    for(i=mayor; i>0; i--)
    {
        flag=0;
        printf("\n");
        if(i<=flagMenor18)
        {
            printf("\t*");
            flag=1;
        }
        if(i<=flagMas18)
        {
            if(flag==1)
            {
                printf("\t  *");
                flag=2;
            }
            else if(flag==0)
            {
                printf("\t\t  *");
                flag=2;
            }

        }
        if(i<=flagMas35)
        {
            if(flag==0)
            {
                printf("\t\t\t    *");
            }
            else if(flag==1)
            {
                printf("\t\t    *");
            }
            else if(flag==2)
            {
                printf("\t    *");
            }
        }
    }
    if(flagMas18==0&&flagMenor18==0&&flagMas35==0)
    {
        printf("\nPara realizar el grafico es necesario ingresar algun usuario al sistema");
    }
    else
    {
        printf("\n|------<18------19-35------>35------|");
        printf("\n        %d         %d         %d",flagMenor18,flagMas18,flagMas35);
    }
}
