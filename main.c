#include <stdio.h>
#include <string.h>
int main() {
    char texto[50];
    int cont = 0;
    int num = 0;
    int max = 0, min = 0;

    printf("Ingrese el texto a medir: ");
    fflush(stdin);//Elimina la basura del programa, ayuda a corregir problemas con los bucles
    fgets(texto, 50, stdin);
    int len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
        len--;
    }
    for (int i = 0; i <= len; i++) { 
        //printf("%c\n",texto[i]);
        if (texto[i] != ' ' && texto[i] != '\0') {
            num++;
        } else {
            if (num > 0) { 
                cont++;
                if (num > max) {
                    max = num;
                }
                if (num < min) {
                    min = num;
                }
                num = 0; 
            }
        }
    }
    printf("El texto tiene un total de %d caracteres\n", len);
    printf("El texto tiene %d palabras\n", cont);
    printf("La palabra mas larga del texto tiene %d letras\n", max);
    printf("La palabra mas corta del texto tiene %d letras\n", min);
    return 0;
}
