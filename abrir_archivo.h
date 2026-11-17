#ifndef LECTURA_H
#define LECTURA_H

#include <stdio.h>
#include <stddef.h>

typedef struct {
    char  *texto;
    int numeroLinea;
} Linea;

typedef struct {
    Linea *lineas;
    int cantidad;
    int capacidad;
} ArchivoFuente;

int  abrir_archivo(int argc, char *argv[], FILE **archivo);
int  leer_lineas(FILE *archivo, ArchivoFuente *src);
void liberar_lineas(ArchivoFuente *src);

#endif
