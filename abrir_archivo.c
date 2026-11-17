#include "lectura.h"

int abrir_archivo(int argc, char *argv[], FILE **archivo)
{
    if (argc < 2) {
        printf("Error: faltan argumentos.\n");
        return -1;
    }

    *archivo = fopen(argv[1], "r");

    if (*archivo == NULL) {
        printf("Error: no se pudo abrir el archivo: %s\n", argv[1]);
        return -1;
    }

    return 0;
}
