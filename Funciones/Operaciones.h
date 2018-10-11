#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

/** \brief Recibe dos numeros flotantes, los suma y muestra el resultado
 *
 * \param A float Primer numero ingresasdo por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float La suma de los dos numeros
 *
 */
float sumarDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los resta y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El resto de los dos numeros
 *
 */
float restarDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los divide (comprobando si el resultado es infinito) y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El cociente de la division
 *
 */
float dividirDosNumeros(float A, float B);


/** \brief Recibe dos numeros flotantes, los multiplica y muestra el resultado
 *
 * \param A float Primer numero ingresado por el usuario
 * \param B float Segundo numero ingresado por el usuario
 * \return float El producto de la multiplicacion
 *
 */
float multiplicarDosNumeros(float A, float B);


/** \brief Recibe un numero entero, calcula su factorial y muestra el resultado
 *
 * \param A int Numero entero ingresado por el usuario
 * \return unsigned long long El factorial del entero
 *
 */
unsigned long long factorial(int A);


#endif // OPERACIONES_H_INCLUDED
