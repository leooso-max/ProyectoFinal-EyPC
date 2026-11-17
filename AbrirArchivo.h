#include <abrir_archivo.h>

int abrir_archivo(int argc, char *argv) {

  char caracter;
  FILE *archivo

  if (argc < 2) {
    printf("Error: faltan argumentos.");
    return -1;
  }

  archivo = fopen(argv[1], "r");

  if (archivo == NULL) {
    printf("Error: no se pudo abrir el archivo: %s", argv[1]);
    return -1;
  }
}
