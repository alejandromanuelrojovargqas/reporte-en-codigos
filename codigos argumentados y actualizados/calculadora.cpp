// Librería estándar para el manejo de flujos de entrada y salida de datos.
#include <iostream>

// Permite usar los elementos de la librería estándar (como cout y cin) sin anteponer 'std::'.
using namespace std;

// Función principal donde se inicia la ejecución del programa.
int main() {
    
    // --- DECLARACIÓN DE VARIABLES ---
    
    // Variable de tipo carácter (char) para almacenar el operador matemático (+, -, *, /).
    char operation; 
    
    // Variables de tipo 'double' para permitir números con precisión decimal en las operaciones.
    double num1, num2; 

    // --- ENTRADA DE DATOS ---
    
    // Muestra el mensaje de bienvenida y el menú de operadores disponibles.
    cout << "--- Bienvenido a la calculadora basica ---" << endl;
    cout << "Ingresa un operador (+, -, *, /): ";
    // Guarda el carácter ingresado por el usuario en la variable 'operation'.
    cin >> operation;

    // Solicita y almacena el primer operando.
    cout << "Ingresa el primer numero: ";
    cin >> num1;

    // Solicita y almacena el segundo operando.
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    
    // --- ESTRUCTURA DE CONTROL (SWITCH) ---
    
    // CORRECCIÓN: Ahora evaluamos 'operation' en lugar de la variable 'option' que no se usaba.
    switch(operation) {
        
        // Caso en que el usuario haya ingresado el carácter '+'
        case '+':
            cout << "Resultado: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
            
        // Caso en que el usuario haya ingresado el carácter '-'
        case '-':
            // CORRECCIÓN: Cambiado el operador de la operación final a resta (-)
            cout << "Resultado: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
            
        // Caso en que el usuario haya ingresado el carácter '*'
        case '*':
            // CORRECCIÓN: Cambiado el operador de la operación final a multiplicación (*)
            cout << "Resultado: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
            
        // Caso en que el usuario haya ingresado el carácter '/'
        case '/':
            // CORRECCIÓN: Se eliminó el operador coma. Ahora evalúa correctamente si el divisor (num2) es 0.
            if (num2 == 0) {
                cout << "Error: No se puede dividir entre 0." << endl;
            } else {
                cout << "Resultado: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            }
            break;
            
        // Caso por defecto: se ejecuta si el carácter ingresado no coincide con ningún operador válido.
        default:
            // CORRECCIÓN: Redacción corregida para evitar la doble negación.
            cout << "parece que hubo un error." << endl;
    } // Cierre del switch
    
    // Indica al sistema operativo que el programa finalizó con éxito.
    return 0;
}