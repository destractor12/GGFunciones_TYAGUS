float getFloat(char mensaje[],float numeroIngresado)
{
    printf("%s",mensaje);
    scanf("%f",&numeroIngresado);
    getchar();
    return numeroIngresado;
}

int getIntEntreMinimoYMaximo(char mensaje[], int enteroIngresado, int maximo, int minimo)
{
    do
    {
        printf("%s",mensaje);
        scanf("%d",&enteroIngresado);
    }
    while(enteroIngresado>maximo||enteroIngresado<minimo);
    return enteroIngresado;
}

int getInt(char mensaje[],int A)
{
    printf("%s",mensaje);
    scanf("%d",&);
    return A;
}

char getChar(char mensaje[], char caracter)
{
    printf("%s",mensaje);
    scanf("%c",&caracter);
    return caracter;
}

int cargaSecuencial(int indice, int array[])
{
    int i=0;
    for(i=0;i<indice;i++)
    {
        printf("Ingresa un numero para la posicion %d del vector ",i);
        scanf("%d",&array[i]);
    }
    return array;
}

int cargaAleatoria(int indice, int array[])
{
    char seguir;
    int i;
    do
    {
        printf("Ingresa la posicion del array donde queres almacenar un numero: ");
        scanf("%d",&i);
        while(i>=indice||i<0)
        {
            printf("Ingresa una posicion valida: ");
            scanf("%d",&i);
        }
        printf("Ingresa el valor para guardar en la posicion %d del array ",i);
        scanf("%d",&array[i]);
        fflush(stdin);
        printf("Queres seguir ingresando valores en el array?");
        scanf("%c",&seguir);
    }
    while(seguir=='s');
    return array;
}

