#include <iostream>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    struct Estudiante estudiante1;
    copiarEstudiante(estudiante1);
    return 0;
}
