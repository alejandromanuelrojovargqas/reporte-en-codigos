// Librería estándar de C++ que permite gestionar los flujos de entrada y salida de datos (como cout y cin).
#include <iostream>

// Indica al compilador el uso del espacio de nombres estándar para evitar anteponer 'std::' a las funciones de la librería.
using namespace std;

// Función principal del programa. Es el punto de entrada obligatorio donde el sistema operativo inicia la ejecución.
int main() {
    
    // --- DECLARACIÓN DE VARIABLES ---
    
    // Variables de tipo entero ('int') destinadas a almacenar los límites inferior y superior del rango.
    int a, b;
    
    // Variable acumuladora para almacenar el resultado de la suma. Se inicializa en 0 para evitar valores residuales en la memoria.
    int suma = 0;
    
    // Variable de tipo entero para guardar el conteo total de elementos procesados dentro del rango.
    int cantidad;
    
    // Variable de punto flotante ('float') diseñada para almacenar el promedio, permitiendo precisión con valores decimales.
    float promedio;

    // --- ENTRADA DE DATOS ---
    
    // Envía un mensaje a la consola solicitando al usuario el límite inferior del rango.
    cout << "Ingresa el numero inicial: ";
    // Detiene la ejecución para capturar el valor ingresado desde el teclado y asignarlo a la variable 'a'.
    cin >> a;

    // Solicita al usuario el límite superior del rango.
    cout << "Ingresa el numero final: ";
    // Captura el valor ingresado y lo asigna a la variable 'b'.
    cin >> b;

    // --- PROCESAMIENTO Y LÓGICA DE ITERACIÓN ---
    
    // Estructura de control cíclica 'for' que itera a través del rango establecido.
    // 1. Inicialización: Se crea una variable de control 'i' con el valor inicial 'a'.
    // 2. Condición: El ciclo se ejecuta continuamente mientras 'i' sea menor o igual a 'b'.
    // 3. Incremento: 'i++' aumenta el valor de la variable de control en una unidad al finalizar cada vuelta.
    for (int i = a; i <= b; i++) {          
        // Operación de acumulación: suma el valor actual de la variable de control 'i' al total acumulado en 'suma'.
        suma = suma + i;
    }

    // --- CÁLCULOS ESTADÍSTICOS ---
    
    // Determina la cantidad total de números enteros dentro del rango cerrado.
    // Se resta el límite inicial del final y se añade una unidad para asegurar la inclusión de ambos extremos.
    cantidad = (b - a) + 1;

    // Calcula la media aritmética del rango numérico.
    // Se aplica una conversión explícita de tipo o "cast" '(float)' sobre la variable 'suma'.
    // Esto fuerza al compilador a realizar una división decimal, evitando que el resultado sea truncado a un valor entero.
    promedio = (float)suma / cantidad;

    // --- SALIDA DE RESULTADOS ---
    
    // Despliega en la consola los valores finales calculados por el programa.
    // El carácter especial '\n' y el manipulador 'endl' se emplean para insertar saltos de línea y formatear la salida de forma limpia.
    cout << "\nSuma total: " << suma << endl;
    cout << "Cantidad de numeros: " << cantidad << endl;
    cout << "Promedio: " << promedio << endl;

    // Finaliza la ejecución de la función 'main'. Retornar el valor 0 es una convención que notifica al sistema que el programa concluyó con éxito.
    return 0;
}