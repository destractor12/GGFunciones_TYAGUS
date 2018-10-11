#include<stdio.h>
#include"Usuarios.h"
#include"Funciones.h"
#include <string.h>

void inicializarUsuariosEstado(eUsuario usuario[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuario[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuario[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuario[i].idUsuario=id[i];
        usuario[i].idSerie=serie[i];
        usuario[i].estado=1;
        strcpy(usuario[i].nombre, nombre[i]);
    }
}

void preCargaHardcode(eSerie series[],int serieLenght,eUsuario usuario[],int usuarioLenght)
{
    inicializarUsuariosEstado(usuario, usuarioLenght);
    inicializarUsuariosHardCode(usuario);
    inicializarSeriesEstado(series,serieLenght);
    inicializarSeriesHardCode(series);
}

int user_BuscarLibre(eUsuario usuario[],int usuarioLenght)
{
    int i;
    int indice=-1;
    for(i=0; i<usuarioLenght; i++)
    {
        if(usuario[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void user_AltaUsuario(eUsuario usuario[],eSerie series[],int serieLenght,int indice,int indicador)
{
    if(indice!=-1)
    {
        if(indicador!=-1)
        {
            printf("Ingresa el Id de usuario: ");
            scanf("%d",&usuario[indice].idUsuario);
            fflush(stdin);
            printf("Ingresa el nombre del usuario: ");
            gets(usuario[indice].nombre);
            fflush(stdin);
            series_mostrarLista(series,serieLenght);
            printf("Ingresa la serie que queres ver: ");
            scanf("%d",&usuario[indice].idSerie);
            fflush(stdin);
            user_comprobarSerieIngresada(usuario,series,serieLenght,indice);
            usuario[indice].estado=1;
        }
        else
        {
            printf("\nNo hay series en el sistema");
        }
    }
    else
    {
        printf("\nNo hay mas lugares disponibles");
    }
}

void user_comprobarSerieIngresada(eUsuario usuario[],eSerie serie[],int serieLenght,int indice)
{
    int i;
    int flag=0;
    for(i=0; i<serieLenght; i++)
    {

        if(usuario[indice].idSerie!=serie[i].idSerie)
        {
            flag=flag+1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag!=0)
    {
        while(flag!=0)
        {
            printf("Ingresa una serie valida ");
            scanf("%d",&usuario[indice].idSerie);
            fflush(stdin);
            for(i=0; i<serieLenght; i++)
            {
                if(usuario[indice].idSerie!=serie[i].idSerie)
                {
                    flag=flag++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
    }
}

void user_mostrarUsuarios(eUsuario usuario[],int userLenght)
{
    int i;
    for(i=0; i<userLenght; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\n\nId de usuario %d\nNombre de usuario %s\nId de serie %d",usuario[i].idUsuario,usuario[i].nombre,usuario[i].idSerie);
        }
    }
}

void user_modificar(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght)
{
    int opcion;
    printf("%\n\n1- CAMBIAR NOMBRE\n2- CAMBIAR ID SERIE ");
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        user_modificarCadena(usuario,usuarioLenght);
        break;

    case 2:
        user_modificarEntero(usuario,usuarioLenght,serieLenght);
        break;
    }
}

void user_modificarEntero(eUsuario usuario[],int usuarioLenght,int serieLenght)
{
    int respuesta;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\nId usuario %d Id serie %d",usuario[i].idUsuario,usuario[i].idSerie);
        }
    }
    printf("\nQue serie queres modificar? (Ingresar ID Usuario) ");
    scanf("%d",&respuesta);
    for(i=0; i<serieLenght; i++)
    {
        if(respuesta==usuario[i].idUsuario)
        {
            printf("Ingresa el nuevo dato ");
            scanf("%d",&usuario[i].idSerie);
            break;
        }
    }
    fflush(stdin);
}

void user_modificarCadena(eUsuario usuario[],int usuarioLenght)
{
    int respuesta;
    int i;
    for(i=0; i<usuarioLenght; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\nId usuario %d Nombre de usuario %s",usuario[i].idUsuario,usuario[i].nombre);
        }
    }
    printf("\nQue nombre queres modificar? (Ingresar ID Usuario) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<usuarioLenght; i++)
    {
        if(respuesta==usuario[i].idUsuario)
        {
            printf("Ingresa el nuevo dato ");
            gets(usuario[i].nombre);
            break;
        }
    }
    fflush(stdin);
}

void user_darDeBaja(eUsuario usuario[],int usuarioLenght)
{
    int respuesta;
    int i;
    for(i=0; i<usuarioLenght; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\nId usuario %d",usuario[i].idUsuario);
        }
    }
    printf("\nQue usuario queres dar de baja? (Ingresar ID Usuario) ");
    scanf("%d",&respuesta);
    fflush(stdin);
    for(i=0; i<usuarioLenght; i++)
    {
        if(respuesta==usuario[i].idUsuario)
        {
            usuario[i].estado=0;
            break;
        }
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght)
{
    int i;
    int j;
    for(i=0; i<usuarioLenght; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\n\nUsuario %s",usuario[i].nombre);
        }
        for(j=0; j<serieLenght; j++)
        {
            if(usuario[i].idSerie==serie[j].idSerie&&usuario[i].estado==1)
            {
                printf("\nSerie %s",serie[j].nombre);
                break;
            }
        }
    }
}

void mostrarSerieConSuUsuario(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght)
{
    int i;
    int j;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            printf("\n\nSeire %s",serie[i].nombre);
        }
        for(j=0; j<usuarioLenght; j++)
        {
            if(serie[i].idSerie==usuario[j].idSerie&&usuario[j].estado==1)
            {
                printf("\nUsuario %s",usuario[j].nombre);
            }
        }
    }
}

int chequearSiSeIngresoUnaSerie(eSerie serie[],int serieLenght)
{
    int indicador=-1;
    int i;
    for(i=0; i<serieLenght; i++)
    {
        if(serie[i].estado==1)
        {
            indicador=0;
            break;
        }
    }
    return indicador;

}
