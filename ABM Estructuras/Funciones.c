#include <stdio.h>
#include"Funciones.h"
#include"Usuarios.h"
#include<string.h>
void menu(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght)
{
    //preCargaHardcode(serie,serieLenght,usuario,usuarioLenght);
    char respuesta;
    int opcion;
    int indice;
    int indicador;

    do
    {
        printf("\n1- ALTA SERIE");
        printf("\n2- ALTA USUARIO");
        printf("\n3- MOSTRAR SERIES");
        printf("\n4- MOSTRAR USUARIOS");
        printf("\n5- MODIFICAR USUARIOS");
        printf("\n6- MODIFICAR SERIES");
        printf("\n7- DAR DE BAJA USUARIO");
        printf("\n8- DAR DE BAJA SERIE");
        printf("\n9- MOSTRAR USUARIO CON SU SERIE");
        printf("\n10- MOSTRAR SERIE CON SU USUARIO");
        printf("\nElegi una opcion ");
        scanf("%d",&opcion);
        fflush(stdin);


        switch(opcion)
        {
        case 1:
            indice=series_BuscarLibre(serie,serieLenght);
            series_Alta(serie,serieLenght,indice);
            break;
        case 2:
            indice=user_BuscarLibre(usuario,usuarioLenght);
            indicador=chequearSiSeIngresoUnaSerie(serie,serieLenght);
            user_AltaUsuario(usuario,serie,serieLenght,indice,indicador);
            break;
        case 3:
            series_mostrarLista(serie,serieLenght);
            break;
        case 4:
            user_mostrarUsuarios(usuario,usuarioLenght);
            break;
        case 5:
            user_modificar(usuario,serie,usuarioLenght,serieLenght);
            break;
        case 6:
            series_modificar(serie,serieLenght);
            break;
        case 7:
            user_darDeBaja(usuario,usuarioLenght);
            break;
        case 8:
            series_darDeBaja(serie,serieLenght);
            break;
        case 9:
            mostrarUsuarioConSuSerie(usuario,serie,usuarioLenght,serieLenght);
            break;
        case 10:
            mostrarSerieConSuUsuario(usuario,serie,usuarioLenght,serieLenght);
            break;

        }
        printf("\n¿Queres seguir con el programa? (S/N) ");
        scanf("%c",&respuesta);
        system("cls");
    }
    while(respuesta=='s');
}




