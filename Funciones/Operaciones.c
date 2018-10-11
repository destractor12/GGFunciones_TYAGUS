float sumarDosNumeros(float A, float B)
{
    float resultado;
    resultado=A+B;
    getchar();
    printf("La suma de los dos operandos es %.2f",resultado);
    return resultado;
}


float restarDosNumeros(float A, float B)
{
    float resultado;
    resultado=A-B;
    getchar();
    printf("La resta de los dos operandos es %.2f",resultado);
    return resultado;
}

float dividirDosNumeros(float A, float B)
{
    char resultadoChar;
    float resultado;
    resultado=A/B;
    getchar();
    if(B==0)
    {
        printf("El resultado de la division es infinito");
        return resultadoChar;
    }
    else
    {
        printf("El cociente de la division es %.2f",resultado);
        return resultado;
    }
}

float multiplicarDosNumeros(float A, float B)
{
    float resultado;
    resultado=A*B;
    getchar();
    printf("El producto de la multiplicacion es %.2f",resultado);
    return resultado;
}

unsigned long long factorial(int A)
{
    int i;
    unsigned long long factor=1;
    for(i=1;i<=A;++i)
    {
        factor=factor*i;
    }
    getchar();
    printf("El factorial del numero %d es %llu",A,factor);
    return factor;
}
