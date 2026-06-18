// Librería estándar de C++ necesaria para las operaciones de entrada y salida de datos (como cout y cin).
#include <iostream>
// Librería necesaria para utilizar funciones matemáticas avanzadas como pow() (potencias).
#include <cmath>

// Indica al compilador el uso del espacio de nombres estándar para evitar el prefijo 'std::'.
using namespace std;

// Función principal donde se inicia la ejecución del programa.
int main() {
    // Declaración de variables para la selección del menú.
    int opcion;
    // Variables de tipo flotante para los parámetros de las funciones matemáticas y el valor 'x'.
    float a, b, c, d, m, x;
    // Variable para almacenar el valor calculado. Se inicializa en 0 por seguridad.
    float resultado = 0;

    // --- MENÚ DE SELECCIÓN ---
    cout << "-- MENU DE FUNCIONES --" << endl;
    cout << "1. Triangular" << endl;
    cout << "2. Gamma" << endl;
    cout << "3. S Funcion" << endl;
    cout << "4. Trapezoidal" << endl;
    cout << "Introduce el numero de la funcion que quieres calcular: ";
    cin >> opcion;

    // --- ESTRUCTURA DE CONTROL (SWITCH) ---
    switch (opcion) {
        
        case 1: // --- FUNCIÓN TRIANGULAR ---
            cout << "Introduce el valor de x: ";
            cin >> x;
            cout << "Introduce el valor de a (limite inferior): ";
            cin >> a;
            cout << "Introduce el valor de m (punto maximo): ";
            cin >> m; 
            cout << "Introduce el valor de b (limite superior): ";
            cin >> b;

            /* Lógica de la función triangular:
               - Si 'x' está fuera del rango [a, b], el resultado es cero.
               - Si 'x' está entre 'a' y 'm', se calcula la pendiente de subida.
               - Si 'x' está entre 'm' y 'b', se calcula la pendiente de bajada. */
            if (x <= a || x >= b) {
                resultado = 0;
            } else if (x <= m) { 
                resultado = (x - a) / (m - a);
            } else { 
                resultado = (b - x) / (b - m);
            }
            break;

        case 2: // --- FUNCIÓN GAMMA ---
            cout << "Introduce el valor de x: ";
            cin >> x;
            cout << "Introduce el valor de a (inicio de la curva): ";
            cin >> a;
            cout << "Introduce el valor de m (punto donde se estabiliza): ";
            cin >> m;
            
            /* Lógica de la función Gamma:
               - Permanece en 0 antes del punto 'a'.
               - Crece linealmente entre 'a' y 'm'.
               - Se estabiliza en 1 para cualquier valor mayor o igual a 'm'. */
            if (x <= a) { 
                resultado = 0;
            } else if (x < m) { 
                resultado = (x - a) / (m - a);
            } else { 
                resultado = 1;
            }
            break;

        case 3: // --- FUNCIÓN S (CORREGIDA) ---
            cout << "Introduce el valor de x: ";
            cin >> x;
            cout << "Introduce el valor de a (limite inferior): ";
            cin >> a;
            cout << "Introduce el valor de c (limite superior): ";
            cin >> c;

            /* CORRECCIÓN DE LOGICA:
               - Primer tramo: Si 'x' es menor que 'a', el resultado es cero.
               - Segundo tramo: Si 'x' está entre 'a' y el punto medio '(a+c)/2', crece de forma parabólica.
               - Tercer tramo: Si 'x' pasa el punto medio pero es menor o igual a 'c', cambia la fórmula usando '(x-c)'.
               - Cuarto tramo: Si es mayor a 'c', se estabiliza en uno. */
            if (x < a) {
                resultado = 0;
            } else if (x <= (a + c) / 2) {
                // Pendiente de crecimiento parabólico inicial
                resultado = 2 * pow((x - a) / (c - a), 2);
            } else if (x <= c) {
                // CORRECCIÓN: Se cambió (x - a) por (x - c) para respetar la ecuación estándar de la función S
                resultado = 1 - 2 * pow((x - c) / (c - a), 2);
            } else {
                resultado = 1;
            }
            break;

        case 4: // --- FUNCIÓN TRAPEZOIDAL ---
            cout << "Introduce el valor de x: ";
            cin >> x;
            cout << "Introduce el valor de a: ";
            cin >> a;
            cout << "Introduce el valor de b: ";
            cin >> b;
            cout << "Introduce el valor de c: ";
            cin >> c;
            cout << "Introduce el valor de d: ";
            cin >> d;

            /* Lógica de la función trapezoidal:
               - Si 'x' está fuera de los extremos [a, d], el resultado es 0.
               - Si está en la rampa de subida [a, b], calcula el crecimiento lineal.
               - Si está en la meseta estable [b, c], el resultado es exactamente 1.
               - Si está en la rampa de bajada [c, d], calcula el decrecimiento lineal. */
            if (x <= a || x >= d) {
                resultado = 0;
            } else if (x <= b) {
                resultado = (x - a) / (b - a);
            } else if (x <= c) {
                resultado = 1;
            } else {
                resultado = (d - x) / (d - c);
            }
            break;

        default:
            cout << "Opcion invalida." << endl;
            return 0;
    }

    // --- SALIDA DEL RESULTADO ---
    cout << "Resultado: " << resultado << endl;
    return 0;
}