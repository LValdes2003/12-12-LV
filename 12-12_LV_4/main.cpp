#include <iostream>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

typedef struct Estudiante Student;

int main() {

    Student estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    return 0;
}
