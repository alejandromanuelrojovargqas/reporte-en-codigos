// Librería estándar de C++ necesaria para las operaciones de entrada y salida de datos (como cout y cin).
#include <iostream>

// Indica al compilador que utilizaremos el espacio de nombres estándar, evitando tener que escribir 'std::' antes de cada comando.
using namespace std;

// Función principal. Es el punto de entrada obligatorio donde el sistema operativo inicia la ejecución del programa.
int main() {
    
    // --- DECLARACIÓN DE VARIABLES ---
    
    // Variables de tipo entero para almacenar los límites del rango que ingresará el usuario.
    int a, b; 
    
    // Variable acumuladora para la suma total. Se inicializa en 0 para asegurar que comience limpia en la memoria.
    int suma = 0; 
    
    // Variable para almacenar el total de números que existen dentro del rango definido.
    int cantidad; 
    
    // Variable de punto flotante (con decimales) para almacenar el promedio, ya que la división rara vez da un número entero exacto.
    float promedio; 

    // --- ENTRADA DE DATOS ---
    
    // Muestra un mensaje en la consola solicitando el primer número.
    cout << "Ingresa el numero inicial: ";
    // Detiene la ejecución del programa hasta que el usuario introduce un valor y lo guarda en la variable 'a'.
    cin >> a;

    // Repite el proceso para solicitar y almacenar el límite final del rango en la variable 'b'.
    cout << "Ingresa el numero final: ";
    cin >> b;

    // --- PROCESAMIENTO Y LÓGICA ---
    
    /* Ciclo 'for' que se ejecuta de forma iterativa. 
       Inicializa una variable de control 'i' con el valor de 'a'.
       La condición indica que el ciclo continuará mientras 'i' sea menor o igual a 'b'.
       'i++' incrementa el valor de 'i' en uno en cada repetición. */
    for (int i = a; i <= b; i++) {
        // En cada iteración, el valor actual de 'i' se suma y se acumula en la variable 'suma'.
        suma = suma + i;
    }

    /* Calcula la cantidad de números evaluados. 
       Se resta el límite inicial del final, y se añade un '+ 1' para incluir ambos extremos en el conteo total. */
    cantidad = (b - a) + 1;

    /* Calcula el promedio matemático.
       Se utiliza el operador de conversión de tipo '(float)' sobre la variable 'suma'.
       Esto fuerza al programa a realizar una división decimal, evitando que el resultado se trunque a un número entero. */
    promedio = (float)suma / cantidad;

    // --- SALIDA DE RESULTADOS ---
    
    /* Muestra los resultados obtenidos en la consola. 
       '\n' y 'endl' se utilizan para generar saltos de línea y dar formato limpio a la salida. */
    cout << "\nSuma total: " << suma << endl;
    cout << "Cantidad de numeros: " << cantidad << endl;
    cout << "Promedio: " << promedio << endl;

    // Finaliza la función principal. Retornar 0 indica al sistema operativo que el programa se ejecutó correctamente y sin errores.
    return 0;
}