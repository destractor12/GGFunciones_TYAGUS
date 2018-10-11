int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<TAM;i++)
    {
        if(legajos[i]==0)
        {
            index=i;
            break;
        }
    }

    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    float auxiliar;
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("Ingresa el legajo del alumno: ");
                scanf("%d",&legajos[index]);
                comprobarLegajo(legajos,TAM,index);
                fflush(stdin);
                printf("\nIngresa el nombre del alumno: ");
                gets(nombres[index]);
                fflush(stdin);
                printf("\nIngresa la primer nota del alumno: ");
                scanf("%d",&nota1[index]);
                comprobarNota(nota1,index);
                fflush(stdin);
                printf("\nIngresa la segunda nota del alumno: ");
                scanf("%d",&nota2[index]);
                comprobarNota(nota2,index);
                fflush(stdin);
                promedio[index]=calcularPromedio(nota1[index],nota2[index]);
                printf("\nEl promedio del alumno es: %f\n",promedio[index]);
            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("\nLegajo: %d\n Nombre: %s\n Nota 1: %d\n Nota 2: %d\n Promedio: %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i]);
                }

            }

}

float modificarAlumno(int legajo[],char nombre[][20],int notaUno[],int notaDos[],float promedio[],int tam)
{
    int opcion;
    int indice;
    printf("Que queres modificar?\n 1- Nombre\n 2- Nota 1\n 3- Nota 2\n");
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        cambiarCadena("Nombre","Que nombre queres modificar? (Ingresar numero de legajo)","Ingresa un nuevo nombre","Nombre no encontrado",nombre,legajo,TAM);
        break;
    case 2:
        indice=cambiarEntero("Primera nota ","Que nota queres modificar? (Ingresar numero de legajo)","Ingresa una nueva nota","Nota no encontrada",notaUno,legajo,TAM);
        promedio[indice]=calcularPromedio(notaUno[indice],notaDos[indice]);
        break;
    case 3:
        indice=cambiarEntero("Segunda nota ","Que nota queres modificar? (Ingresar numero de legajo)","Ingresa una nueva nota","Nota no encontrada",notaDos,legajo,TAM);
        promedio[indice]=calcularPromedio(notaUno[indice],notaDos[indice]);
        break;
    }
    return promedio[indice];
}


int cambiarEntero(char mensajeMostrarDato[],char mensajePregunta[],char mensajePedirDato[],char mensajeIncorrecto[],int array[],int legajo[],int tam)
{
        int i;
        int respuesta;
        for(i=0;i<tam;i++)
        {
            if(legajo[i]!=0)
            {
                printf("Numero de legajo %d %s %d\n",legajo[i],mensajeMostrarDato,array[i]);
            }
        }
        printf("%s\n",mensajePregunta);
        scanf("%d",&respuesta);
        for(i=0;i<tam;i++)
        {
            if(respuesta==legajo[i])
            {
                printf("%s ",mensajePedirDato);
                scanf("%d",&array[i]);
                comprobarNota(array,i);
                break;
            }
        }
        if(respuesta!=legajo[i])
        {
            printf("%s\n",mensajeIncorrecto);
        }
        return i;
}

void cambiarCadena(char mensajeMostrarDato[],char mensajePregunta[],char mensajePedirDato[],char mensajeIncorrecto[],char cadena[][20],int legajo[],int tam)
{
        int i;
        int respuesta;
        for(i=0;i<tam;i++)
        {
            if(legajo[i]!=0)
            {
                printf("Numero de legajo %d %s %s\n",legajo[i],mensajeMostrarDato,cadena[i]);
            }
        }
        printf("%s\n",mensajePregunta);
        scanf("%d",&respuesta);
        for(i=0;i<tam;i++)
        {
            if(respuesta==legajo[i])
            {
                printf("%s ",mensajePedirDato);
                fflush(stdin);
                gets(cadena[i]);
                break;
            }
        }
        if(respuesta!=legajo[i])
        {
            printf("%s\n",mensajeIncorrecto);
        }
}

void comprobarLegajo(int legajo[],int tam,int indice)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(i!=indice&&legajo[i]==legajo[indice])
        {
            do
            {
            printf("Legajo ya existente. Ingrese un legajo distinto: ");
            scanf("%d",&legajo[indice]);
            }
            while(i!=indice&&legajo[i]==legajo[indice]);
        }
    }
}

int darDeBaja(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam)
{
    int respuesta;
    int i;
    mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
    printf("Ingrese el legajo del alumno que quiere dar de baja ");
    scanf("%d",&respuesta);
    for(i=0;i<tam;i++)
    {
        if(legajo[i]==respuesta)
        {
            legajo[i]=0;
            return legajo[i];
            printf("Alumno dado de baja");
            break;
        }
    }
}

void ordenarPorNombre(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam)
{
    int i;
    int j;
    char auxiliarChar[20];
    int auxiliarInt;
    float auxiliarFloat;
    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(auxiliarChar,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxiliarChar);

                auxiliarInt=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=auxiliarInt;

                auxiliarInt=nota1[i];
                nota1[i]=nota1[j];
                nota1[j]=auxiliarInt;

                auxiliarInt=nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=auxiliarInt;

                auxiliarFloat=promedio[i];
                promedio[i]=promedio[j];
                promedio[j]=auxiliarFloat;
            }
        }
    }
    printf("\nAlumnos ordenados alfabeticamente (A-Z)\n");
    mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
}

void comprobarNota(int nota[],int indice)
{
    if(nota[indice]<1||nota[indice]>10)
    {
        do
        {
            printf("Ingresa una nota valida (Entre 1 y 10) ");
            scanf("%d",&nota[indice]);
        }
        while(nota[indice]<1||nota[indice]>10);
    }
}
