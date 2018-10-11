//Funciones series (Estructura que tiene campo que va a aparecer en la otra estructura. Primero tiene que darse de alta esta estructura)
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

//Funciones usuarios (Estructura que se relaciona con otra estructura que tiene que existir previamente)
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
    for(i=0;i<usuarioLenght;i++)
    {
        if(usuario[i].estado==1)
        {
            printf("\n\nUsuario %s",usuario[i].nombre);
        }
        for(j=0;j<serieLenght;j++)
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
    for(i=0;i<serieLenght;i++)
    {
        if(serie[i].estado==1)
        {
            printf("\n\nSeire %s",serie[i].nombre);
        }
        for(j=0;j<usuarioLenght;j++)
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

//Otros
void menu(eUsuario usuario[],eSerie serie[],int usuarioLenght,int serieLenght)
{
    preCargaHardcode(serie,serieLenght,usuario,usuarioLenght);
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
