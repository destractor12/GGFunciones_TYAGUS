#include<stdlib.h>
#include<stdio.h>
#include"series.h"
#include <string.h>

void inicializarSeriesEstado(eSerie serie[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        serie[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie serie[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        serie[i].idSerie=id[i];
        serie[i].cantidadTemporadas=cantidad[i];
        serie[i].estado=1;
        strcpy(serie[i].nombre, nombre[i]);
        strcpy(serie[i].genero, genero[i]);
    }
}

int series_BuscarLibre(eSerie serie[],int serieLenght)
{
    int i;
    int indice=-1;
    for(i=0;i<serieLenght;i++)
    {
        if(serie[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void series_Alta(eSerie serie[],int serieLenght,int indice)
{
    if(indice!=-1)
    {
        printf("Ingresa la Id de la serie ");
        scanf("%d",&serie[indice].idSerie);
        fflush(stdin);
        printf("Ingresa el nombre de la serie: ");
        gets(serie[indice].nombre);
        fflush(stdin);
        printf("Ingresa el genero de la serie: ");
        gets(serie[indice].genero);
        fflush(stdin);
        printf("Ingresa la cantidad de temporadas de la serie: ");
        scanf("%d",&serie[indice].cantidadTemporadas);
        fflush(stdin);
        serie[indice].estado=1;
    }
}

void series_mostrarLista(eSerie serie[],int serieLenght)
{
    int i;
    for(i=0;i<serieLenght;i++)
    {
        if(serie[i].estado==1)
        {
            printf("\n\nId Serie: %d\nNombre Serie: %s\nGenero: %s\nCantidad de temporadas: %d",serie[i].idSerie,serie[i].nombre,serie[i].genero,serie[i].cantidadTemporadas);
        }
    }
}

void series_modificarNombre(eSerie serie[],int serieLenght)
{
    int respuesta;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            printf("\nId serie %d Nombre de serie %s",serie[i].idSerie,serie[i].nombre);
        }
    }
    printf("Que nombre de serie queres modificar? (Ingresar ID de Serie) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<serieLenght; i++)
    {
        if(respuesta==serie[i].idSerie)
        {
            printf("Ingresar el nuevo nombre ");
            gets(serie[i].nombre);
            break;
        }
    }
    fflush(stdin);
}

void series_modificarGenero(eSerie serie[],int serieLenght)
{
    int respuesta;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            printf("\nId serie %d Genero de la serie %s",serie[i].idSerie,serie[i].genero);
        }
    }
    printf("Que genero queres modificar? (Ingresar ID de Serie) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<serieLenght; i++)
    {
        if(respuesta==serie[i].idSerie)
        {
            printf("Ingresar el nuevo genero ");
            gets(serie[i].genero);
            break;
        }
    }
    fflush(stdin);
}

void series_modificarTemporadas(eSerie serie[],int serieLenght)
{
    int respuesta;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            printf("\nId serie %d Cantidad de temporadas %d",serie[i].idSerie,serie[i].cantidadTemporadas);
        }
    }
    printf("\nQue temporadas queres modificar? (Ingresar ID Serie) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<serieLenght; i++)
    {
        if(respuesta==serie[i].idSerie)
        {
            printf("Ingresa el nuevo dato ");
            scanf("%d",&serie[i].cantidadTemporadas);
            break;
        }
    }
    fflush(stdin);
}

void series_modificar(eSerie serie[],int serieLenght)
{
    int opcion;
    printf("\n\n1- NOMBRE DE LA SERIE\n2- GENERO DE LA SERIE\n3- CANTIDAD DE TEMPORADAS ");
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        series_modificarNombre(serie,serieLenght);
        break;
    case 2:
        series_modificarGenero(serie,serieLenght);
        break;
    case 3:
        series_modificarTemporadas(serie,serieLenght);
        break;
    }
}

void series_darDeBaja(eSerie serie[],int serieLenght)
{
    int respuesta;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            printf("\nId serie %d",serie[i].idSerie);
        }
    }
    printf("\nQue serie queres dar de baja? (Ingresar ID serie) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<serieLenght; i++)
    {
        if(respuesta==serie[i].idSerie)
        {
            serie[i].estado=0;
            break;
        }
    }
}
