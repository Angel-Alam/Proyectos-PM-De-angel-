/***********************************************************/
/*           Programación para mecatrónicos                      */
/*  Nombre:    Angel Alam Mateo Encarnacion                                        */
/*  Matricula: 2024-0686                                                     */
/*  Seccion:   Viernes                                                        */
/*  Practica:  Proyecto Final                                            */
/*  Fecha:     4/12/2024                                                     */
/***********************************************************/
#include <stdio.h>    
#include <stdlib.h>   
#include <string.h>   
#include <stdbool.h>  

#define MAX_LEN 100   
#define MAX_RECORDS 100 

typedef struct {
    char nombre[MAX_LEN];   
    float promedio;         
    char carrera[MAX_LEN];  
} Alumno;

Alumno alumnos[MAX_RECORDS]; // Arreglo para almacenar los registros de alumnos.
int totalAlumnos = 0;        // Contador de registros almacenados.

// Verifica si un archivo existe.
bool archivoExiste(const char *nombre) {
    FILE *f = fopen(nombre, "r"); // Intenta abrir el archivo en modo lectura.
    if (f) { fclose(f); return true; } // Si se abre, el archivo existe.
    return false; // Si no se abre, el archivo no existe.
}

// Reinicia el arreglo de alumnos y el contador.
void nuevoArchivo() {
    totalAlumnos = 0; // Reinicia el contador.
    printf("Nuevo archivo creado.\n");
}

// Carga los datos de un archivo.
void abrirArchivo(const char *nombre) {
    if (!archivoExiste(nombre)) { // Verifica si el archivo existe.
        printf("El archivo no existe.\n");
        return;
    }
    FILE *f = fopen(nombre, "rb"); // Abre el archivo en modo binario de lectura.
    fread(&totalAlumnos, sizeof(int), 1, f); // Lee la cantidad de alumnos almacenada.
    fread(alumnos, sizeof(Alumno), totalAlumnos, f); // Carga los registros de alumnos.
    fclose(f); // Cierra el archivo.
    printf("Archivo '%s' cargado.\n", nombre);
}

// Guarda los datos en un archivo.
void guardarArchivo(const char *nombre) {
    FILE *f = fopen(nombre, "wb"); // Abre el archivo en modo binario de escritura.
    fwrite(&totalAlumnos, sizeof(int), 1, f); // Escribe la cantidad de registros.
    fwrite(alumnos, sizeof(Alumno), totalAlumnos, f); // Escribe los registros.
    fclose(f); // Cierra el archivo.
    printf("Archivo '%s' guardado.\n", nombre);
}

// Agrega un nuevo registro de alumno.
void agregarAlumno() {
    if (totalAlumnos >= MAX_RECORDS) { // Verifica si se alcanzó el límite de registros.
        printf("Límite alcanzado.\n");
        return;
    }
    Alumno nuevo;
    printf("Nombre: "); // Pide el nombre del alumno.
    fgets(nuevo.nombre, MAX_LEN, stdin); // Lee el nombre.
    strtok(nuevo.nombre, "\n"); // Elimina el salto de línea al final.

    printf("Promedio: "); // Pide el promedio del alumno.
    scanf("%f", &nuevo.promedio); // Lee el promedio.
    getchar(); // Limpia el buffer de entrada.

    printf("Carrera: "); // Pide la carrera del alumno.
    fgets(nuevo.carrera, MAX_LEN, stdin); // Lee la carrera.
    strtok(nuevo.carrera, "\n"); // Elimina el salto de línea al final.

    alumnos[totalAlumnos++] = nuevo; // Agrega el nuevo alumno al arreglo y aumenta el contador.
    printf("Alumno agregado.\n");
}

// Busca un alumno por nombre.
void buscarAlumno() {
    char nombreBuscado[MAX_LEN];
    printf("Nombre a buscar: "); // Pide el nombre a buscar.
    fgets(nombreBuscado, MAX_LEN, stdin); // Lee el nombre.
    strtok(nombreBuscado, "\n"); // Elimina el salto de línea al final.

    for (int i = 0; i < totalAlumnos; i++) { // Recorre el arreglo de alumnos.
        if (strcmp(alumnos[i].nombre, nombreBuscado) == 0) { // Compara el nombre buscado.
            printf("Alumno: %s | Promedio: %.2f | Carrera: %s\n", 
                   alumnos[i].nombre, alumnos[i].promedio, alumnos[i].carrera);
            return; // Si lo encuentra, muestra los datos y termina.
        }
    }
    printf("Alumno no encontrado.\n"); // Si no lo encuentra, muestra un mensaje.
}

// Menú principal del programa.
int main() {
    int opcion;
    char nombreArchivo[MAX_LEN];
    do {
        // Muestra el menú de opciones.
        printf("\n1. Nuevo Archivo  2. Abrir Archivo  3. Guardar Archivo\n");
        printf("4. Agregar Alumno  5. Buscar Alumno  6. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion); // Lee la opción seleccionada.
        getchar(); // Limpia el buffer de entrada.

        switch (opcion) {
            case 1: nuevoArchivo(); break; // Crea un nuevo archivo.
            case 2:
                printf("Archivo: "); // Pide el nombre del archivo a abrir.
                fgets(nombreArchivo, MAX_LEN, stdin); // Lee el nombre del archivo.
                strtok(nombreArchivo, "\n"); // Elimina el salto de línea.
                abrirArchivo(nombreArchivo); break; // Abre el archivo.
            case 3:
                printf("Archivo: "); // Pide el nombre del archivo para guardar.
                fgets(nombreArchivo, MAX_LEN, stdin); // Lee el nombre del archivo.
                strtok(nombreArchivo, "\n"); // Elimina el salto de línea.
                guardarArchivo(nombreArchivo); break; // Guarda en el archivo.
            case 4: agregarAlumno(); break; // Agrega un nuevo alumno.
            case 5: buscarAlumno(); break; // Busca un alumno por nombre.
            case 6: printf("Saliendo...\n"); break; // Termina el programa.
            default: printf("Opción inválida.\n"); // Maneja opciones no válidas.
        }
    } while (opcion != 6); 
    return 0;
}
