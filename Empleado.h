#include<Librerias.h>
class Empleado {
private:
    std::string nombre;
    std::string cedula;
    int edad;
    Fecha fechaNacimiento;
    Fecha fechaContratacion;

public:
    Empleado(string nombre = "", string cedula = "", int edad = 0, Fecha fechaNacimiento = Fecha(), Fecha fechaContratacion = Fecha())
        : nombre(nombre), cedula(cedula), edad(edad), fechaNacimiento(fechaNacimiento), fechaContratacion(fechaContratacion) {}

    void setNombre(const string& nombre) {
        this->nombre = nombre;
    }

    void setCedula(const string& cedula) {
        this->cedula = cedula;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setFechaNacimiento(const Fecha& fecha) {
        this->fechaNacimiento = fecha;
    }

    void setFechaContratacion(const Fecha& fecha) {
        this->fechaContratacion = fecha;
    }

    string getNombre() const {
        return nombre;
    }

    string getCedula() const {
        return cedula;
    }

    int getEdad() const {
        return edad;
    }

    Fecha getFechaNacimiento() const {
        return fechaNacimiento;
    }

    Fecha getFechaContratacion() const {
        return fechaContratacion;
    }

    // Mostrar la información del empleado
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Cédula: " << cedula << endl;
        cout << "Edad: " << edad << endl;
        cout << "Fecha de Nacimiento: " << fechaNacimiento.toString() << endl;
        cout << "Fecha de Contratación: " << fechaContratacion.toString() << endl;
    }
};

