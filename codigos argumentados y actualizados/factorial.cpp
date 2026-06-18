// Librería estándar de la cabecera de C necesaria para gestionar funciones de entrada y salida de datos (como printf).
#include <stdio.h>

// Función principal del programa. Es el punto de inicio obligatorio para la ejecución del código en C.
int main() {
    
    // Declaración e inicialización de una variable entera 'n' con el valor de 5, que define el número a evaluar.
    int n = 5;
    
    // Muestra un mensaje informativo en la consola indicando el valor que se procesará por defecto.
    printf("el numereo por defecto de factorial es 5: \n");
    
    /* Declaración de la variable 'factorial' utilizando el tipo de dato 'long long'.
       Se inicializa en 1 (el elemento neutro de la multiplicación) y se usa este tipo de dato extendido 
       porque los factoriales crecen extremadamente rápido y requieren un espacio de memoria muy amplio. */
    long long factorial = 1;
    
    // --- BUCLE DE PROCESAMIENTO (CÁLCULO DEL FACTORIAL) ---
    
    /* Estructura cíclica 'for' para realizar las multiplicaciones sucesivas.
       Inicializa la variable de control 'i' en 1 y se ejecuta iterativamente mientras 'i' sea menor o igual a 'n'.
       '++i' incrementa el valor de 'i' en una unidad al final de cada iteración. */
    for (int i = 1; i <= n; ++i) {
        
        /* Operador de asignación compuesta. Equivale a escribir: factorial = factorial * i;
           Multiplica el valor acumulado actual por el valor de la variable de control 'i'. */
        factorial *= i; 
    }
    
    // --- SALIDA DE RESULTADOS ---
    
    /* Imprime el resultado final en la consola utilizando especificadores de formato:
       '%d' se asocia con la variable entera 'n'.
       '%lld' se asocia con la variable 'factorial' de tipo long long int. */
    printf("el factorial de %d es: %lld\n", n, factorial);
    
    // Finaliza la ejecución de la función 'main'. 
    return 0;
}