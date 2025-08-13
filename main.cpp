#include "Empleado.h"
#include "Fecha.h"
#include "Librerias.h"

int main()
{
    const int MAX_EMPLEADOS = 10;
    Empleado empleados[MAX_EMPLEADOS];
    int numEmpleados = 0;

    while (numEmpleados < MAX_EMPLEADOS)
    {
        string nombre, cedula;
        int edad, dia, mes, annio;

        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese cédula: ";
        cin >> cedula;
        cout << "Ingrese edad: ";
        cin >> edad;

        cout << "Ingrese fecha de nacimiento (dia mes annio): ";
        cin >> dia >> mes >> annio;
        Fecha fechaNacimiento(dia, mes, annio);

        cout << "Ingrese fecha de contratación (dia mes annio): ";
        cin >> dia >> mes >> annio;
        Fecha fechaContratacion(dia, mes, annio);

        empleados[numEmpleados] = Empleado(nombre, cedula, edad, fechaNacimiento, fechaContratacion);
        numEmpleados++;

        char opcion;
        cout << "¿Desea ingresar otro empleado? (s/n): ";
        cin >> opcion;
        if (opcion != 's' && opcion != 'S')
        {
            break;
        }
    }

    cout << "\nLista de empleados:\n";
    for (int i = 0; i < numEmpleados; i++)
    {
        cout << "\nEmpleado " << i + 1 << ":\n";
        empleados[i].mostrarInformacion();
    }

    return 0;
}
