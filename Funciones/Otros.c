void mostrarArray(int indice, int array[])
{
    int i=0;
    for(i=0; i<indice; i++)
    {
        printf("El valor para el indice %d es %d\n",i,array[i]);
    }
}

int ordenarArray(int indice, int array[])
{
    int i;
    int j;
    int aux;

    for(i=0; i<j; i++)
    {
        for(j=i+1; j<indice; j++)
        {
            if(array[i]>array[j])
            {
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }
    }
    return array;
}

int buscarChar(char array[],int cantidad, char caracter)
{
    int index = -1;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
        return index;
    }
}

int contarPares(int array[],int cantidad)
{
    int contadorPares = 0;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contadorPares++;
        }
    }
    return contadorPares;
}

void menu(estructura estructura[],int estructuraLenght)
{
    char seguir='s';
    int opcion;
    do
    {
        printf("1- Agregar");
        printf("\n2- Mostrar");
        printf("\n3- Modificar");
        printf("\n4- Borrar");
        printf("\n5- Ordenar");
        printf("\n6- Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            funcionagregar(estructura estructura[],int estructuraLenght);
            break;
        case 2:
            funcionMostrar(estructura estructura[],int estructuraLenght);
            break;
        case 3:
            funcionModificar(estructura estructura[],int estructuraLenght);
            break;
        case 4:
            funcionBorrar(estructura estructura[],int estructuraLenght);
            break;
        case 5:
            funcionOrdenar(estructura estructura[],int estructuraLenght);
            break;
        case 6:
            seguir='n';
            break;
        }
        if(seguir!='n');
        do
        {
            printf("Queres seguir con el programa? (S/N)");
            scanf("%c",&seguir);
        }
        while(seguir!='s'&&seguir!='n');

        system("cls");
    }
    while(seguir=='s');
}

void inicializarHarcode(estructura estructura[])
{
    char nombre[20][50]= {"Alberto","Jose","Maria","Pepe","Julian","Camila","Victoria","Selene","Juan Cruz","Nicolas","Franco","Ciro","Ezequiel","Emanuel","Alejandro","Matias","Carlos","Natan","David","Francisco"};
    int dni[20]= {42589785,23456978,10457863,32014756,42147544,52333457,24965784,30145965,29771276,16279490,14575887,10476685,16686238,41371597,10385485,41754221,19373276,4385555,10173055,3073077};
    int edad[20]= {15,25,12,100,97,3,46,92,24,96,43,83,25,89,41,79,97,37,21,28};
    char direccion[20][50]= {"Beron de Astrada 4589","Montiel 154","Ana Diaz 892","Guamini 6600","Fructuoso Rivera 9785","Corrales 4788","Tabare 1024","Avenida Roca 6658","Timoteo Gordillo 9785","Cañada de Gomez 7845","Cosquin 1290","Itaqui 785","Avenida Cruz 2300","Chilavert 1900","Jose Leon Suarez 9800","Ferre 800","Soldado de la Frontera 3000","Madariaga 1200","Unanue 3300","Avenida Mitre 750"};
    int telefono[20]={39665247,46057895,22367458,66654897,10456964,46222596,78453256,34521689,11169878,45567785,37894563,22224458,66697852,22364415,77829953,82930100,05126472,55962232,47859965,88956621};
    char apellido[20][50]= {"Gomez","Godinez","Fernandez","Vargas","Bardini","Galli","Rios Taurasi","Vitale","Pacheco","Jimenez","Quispe","Lezano","Velazco","Gonzalez","Sinay","Gasbarro","Estarque","Acuña","Vecchio","Brienza"};
    int i;
    for(i=0; i<20; i++)
    {
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].edad=edad[i];
        lista[i].dni=dni[i];
        lista[i].estado=1;
    }
}
