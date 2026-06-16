// Librería estándar para el manejo de flujos de entrada y salida de datos.
#include <iostream>

// Permite usar los elementos de la librería estándar (como cout y cin) sin anteponer 'std::'.
using namespace std;

// Función principal donde se inicia la ejecución del programa.
int main() {
    
    // --- DECLARACIÓN DE VARIABLES ---
    
    // OJO: Esta variable está declarada pero nunca se le pide un valor al usuario ni se usa correctamente.
    int option; 
    
    // Variable de tipo carácter (char) para almacenar el operador matemático (+, -, *, /).
    char operation; 
    
    // Variables de tipo 'double' para permitir números con precisión decimal en las operaciones.
    double num1, num2; 

    // --- ENTRADA DE DATOS ---
    
    // Muestra el mensaje de bienvenida y el menú de operadores disponibles.
    cout <<"---bienvenido a la calculadora basica---" << endl;
    cout <<"ingresa un operador tal como: (+,-,*,/): " << endl;
    // Guarda el carácter ingresado por el usuario en la variable 'operation'.
    cin >> operation;

    // Solicita y almacena el primer operando.
    cout <<"ingresa el primer numero: ";
    cin >> num1;

    // Solicita y almacena el segundo operando.
    cout <<"ingresa un segundo numero: ";
    cin >> num2;
    
    // --- ESTRUCTURA DE CONTROL (SWITCH) ---
    
    // DETALLE CRÍTICO: Aquí dice 'switch(option)', pero debería ser 'switch(operation)'. 
    // Como 'option' no tiene ningún valor asignado, el switch no coincidirá con ningún caso.
    switch(option){
        
        // Caso en que el usuario haya ingresado el carácter '+'
        case '+':
            // Muestra en consola la representación de la suma y su resultado.
            std::cout << "resultado: " <<num1<< "+" << num2 << "=" << (num1 + num2) << endl;
            // 'break' interrumpe la estructura switch para evitar que se ejecuten los casos siguientes.
            break;
            
        // Caso en que el usuario haya ingresado el carácter '-'
        case '-':
            // ERROR DE LÓGICA: En la operación final dice (num1 + num2) en lugar de (num1 - num2).
            std::cout << "resultado: " <<num1<< "-" << num2 << "=" << (num1 + num2) << endl;
            break;
            
        // Caso en que el usuario haya ingresado el carácter '*'
        case '*':
            // ERROR DE LÓGICA: En la operación final también dice (num1 + num2) en lugar de (num1 * num2).
            std::cout << "resultado: " <<num1<< "*" << num2 << "=" << (num1 + num2) << endl;
            break;
            
        // Caso en que el usuario haya ingresado el carácter '/'
        case '/':
            // DETALLE TÉCNICO: La condición '(num2,num1 == 0)' utiliza el operador coma de C++, lo cual es incorrecto aquí.
            // Para validar que no se divida entre cero, la sintaxis correcta debe evaluar solo al divisor: 'if (num2 == 0)'.
            if (num2,num1 == 0) {
                cout <<"error: no se puede dividir entre 0." <<endl;
            } else {
                // Realiza y muestra la división si el segundo número es válido.
                cout << "resultado: " << num1 << " / " << num2 << "=" << (num1 / num2) << endl;
            }
            break;
            
        // Caso por defecto: se ejecuta si el carácter ingresado no coincide con ninguna de las opciones anteriores.
        default:
            // Nota de redacción: El mensaje dice "operador no invalido" (doble negación), lo correcto sería "operador inválido".
            cout << "error: operador no invalido." << endl;
    } // Cierre del switch
    
    // Indica al sistema operativo que el programa finalizó con éxito.
    return 0;
}