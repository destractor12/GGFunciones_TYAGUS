char seguir='s';
    int opcion=0;
    int flag=0;
    EPersona lista[20];
    inicializarEstados(lista);
    //inicializarHarcode(lista);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        opcion=getInt("Elegi una opcion ",opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1:
                agregarPersona(lista);
                flag=1;
                break;
            case 2:
                borrarPersona(lista,flag);
                break;
            case 3:
                ordenarListaPorNombre(lista,flag);
                break;
            case 4:
                imprimirGrafico(lista);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("\nOpcion no encontrada");
                break;
        }
        printf("\n");
        system("pause");
        system("cls");
    }
-----------------------------------------------------------------------------------------------------------------------


