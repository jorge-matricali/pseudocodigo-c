#include <stdio.h>
#include "pseudo.h"

int main(int argc, char** argv) {
    SI argc > 1 ENTONCES
        printf("Ingresaste parametros\n")
    SINO
        printf("No ingresaste parametros\n")
    FINSI
}
