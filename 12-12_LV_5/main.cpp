#include <iostream>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}

void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    imprimirEstudiante(estudiante1);
    modificarEstudiante(&estudiante1);
    imprimirEstudiante2(&estudiante1);
    return 0;
}
