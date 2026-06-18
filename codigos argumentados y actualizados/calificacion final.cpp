#include <iostream> // Biblioteca estándar para el manejo de flujos de entrada y salida (cin y cout).
using namespace std; // Permite el uso directo de los elementos de la biblioteca estándar sin el prefijo std::.

/* ================================================================
   PROGRAMA: CALCULADORA DE CALIFICACIÓN FINAL
   DESCRIPCIÓN: 
   Este programa evalúa si un alumno aprueba una materia basándose
   en su asistencia (mínimo 80%) y la nota de su examen (mínimo 50).
   Si cumple ambos, calcula un promedio ponderado:
   - Tareas: 30%
   - Documentación: 30%
   - Examen: 40%
   ================================================================
*/

int main() {
    // Declaración de variables de tipo flotante (float) para admitir valores con decimales.
    float tareas, documentacion, examen;
    float asistencia;
    float calificacionFinal;

    // --- SECCIÓN DE ENTRADA DE DATOS ---
    // Solicitud y captura de las calificaciones y el porcentaje de asistencia mediante la consola.
    cout << "Ingrese calificacion de tareas: ";
    cin >> tareas;

    cout << "Ingrese calificacion de documentacion: ";
    cin >> documentacion;

    cout << "Ingrese calificacion del examen: ";
    cin >> examen;

    cout << "Ingrese porcentaje de asistencia: ";
    cin >> asistencia;

    // --- SECCIÓN DE LÓGICA CONDICIONAL ---
    
    /* Primer criterio de exclusión: 
       Se verifica si el estudiante cumple con el mínimo de asistencia.
       Si tiene menos de 80, queda fuera automáticamente. */
    if (asistencia < 80) {
        cout << "\nNo tiene derecho a examen." << endl;
        cout << "Asistencia insuficiente." << endl;
    } 
    /* Segundo criterio de exclusión: 
       Si cumple la asistencia, se evalúa que el examen no sea menor a 50. */
    else if (examen < 50) {
        cout << "\nNo aprueba." << endl;
        cout << "La calificacion del examen es menor a 50." << endl;
    } 
    /* Caso de éxito: 
       Si pasó los dos filtros anteriores, se calcula la nota final. */
    else {
        // Cálculo matemático utilizando un promedio ponderado
        calificacionFinal = (tareas * 0.30) +
                            (documentacion * 0.30) +
                            (examen * 0.40);

        // Despliegue del resultado final en la consola.
        cout << "\nLa calificacion final es: "
             << calificacionFinal << endl;
    }

    return 0; // Indica al sistema operativo que el programa finalizó correctamente.
}