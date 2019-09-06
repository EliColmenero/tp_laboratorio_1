#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Solicita números al usuario
 * \param Numero corresponde al dato numerico que le solicita al usuario
 * \return El número ingresado por el usuario
 *
 */
 int PedirNumero(){
    int numero;

        printf("\n Ingrese un numero \n");
        scanf("%d" ,&numero);

    return numero;
    }

/**
 * \brief Suma los números ingresados
 * \param Suma corresponde al resultado de la operación realizada
 * \return El resultado de la suma
 *
 */

    int sumar(int numero1, int numero2){
    int suma; //Se declara "int suma" para guardar el resultado de la operación

    suma = numero1 + numero2;

    return suma;
}

/**
 * \brief Resta los números ingresados
 * \param Resta corresponde al resultado de la operación realizada
 * \return El resultado de la resta
 *
 */

 int restar(int numero1, int numero2){
    int resta;

    resta = numero1 - numero2;

    return resta;
}

/**
 * \brief Divide los números ingresados
 * \param Cociente corresponde al resultado de la operación realizada
 * \return El resultado de la división
 *
 */

void dividir(int numero1, int numero2){
    float cociente;

    // Se realiza una prueba de error, dando aviso de que no es posible realizar la división si se ingresa un 0 en segundo término

	if(numero2 == 0){
        printf("No es posible dividir por 0 \n");
    }
    else
    {
        //Si el segundo número ingresado es distinto de 0, se realizará la operación

        cociente = (float)numero1 / (float)numero2;
        printf("El resultado de la division es %.2f \n" ,cociente);
    }
}

/**
 * \brief Multiplica los números ingresados
 * \param Producto corresponde al resultado de la operación realizada
 * \return El resultado de la multiplicación
 *
 */

 int multiplicar(int numero1, int numero2){
    int producto;

    producto = numero1 * numero2;

    return producto;
}

/**
 * \brief Calcula el factorial de cada uno de los números ingresados
 * \param Auxiliar corresponde al resultado del factorial del número ingresado
 * \return El resultado que refleje el factorial del número ingresado
 *
 */

    int factorizar(int numero){
    int auxiliar = 1;

    // Se evalúa el caso de error, de ser el número ingresado menor a 0, se imprimirá el mensaje de error

    if(numero < 0){
        printf("No es posible calcular el factorial de un numero negativo \n");
        PedirNumero();
    }

    if(numero > 0){
        auxiliar = numero * factorizar(numero - 1);

        //El factorial del número ingresado será el resultado de la multiplicación del número por el factorial de su anterior
    }

    return auxiliar;

}

/**
 * \brief Muestra los resultados de todas las operaciones realizadas
 * \param Numero1 corresponde al primer número ingresado por el usuario
 * \param Numero2 corresponde al segundo número ingresado por el usuario
 * \param Resultado corresponde al resultado a reflejar de todas las operaciones
 * \return
 *
 */
 void MostrarResultados(){

    int numero1;
	int numero2;
	int resultado;

	numero1 = PedirNumero();
	numero2 = PedirNumero();

    //Se muestran los números actuales ingresados

	printf("Los numeros ingresados son: %d y %d \n" ,numero1 ,numero2);

	//Se expresan todos los resultados de las operaciones utilizando las funciones correspondientes:

	resultado = sumar(numero1,numero2); // Se llama a la función y se le pasan los valores para operar con la misma
	printf("La suma de los numeros es %d \n" ,resultado); //Se muestra el resultado de la operación

	resultado = restar(numero1,numero2);
	printf("La resta de los numeros es %d \n" ,resultado);

	dividir(numero1, numero2);

	resultado = multiplicar(numero1,numero2);
	printf("El producto de los numeros es %d \n" ,resultado);

	resultado = factorizar(numero1);
	printf("El factorial de %d es %d \n" ,numero1 ,resultado);

	resultado = factorizar(numero2);
	printf("El factorial de %d es %d \n" ,numero2 ,resultado);

}
