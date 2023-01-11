#include <stdio.h>
#include <string.h>
#include <Ctype.h>

int main(){
    char frase[50], auxMai[50], auxMin[50];
    int tamanho;

    gets(frase);

    tamanho = strlen(frase);

    for (i=0; i<tammanho; 1++){
        auxMai[1] = toupper(frase[i]);
        auxMin[1] = tolower(frase[i]);
    }

    printf("Maiuscula: %s\n", auxMai);
    printf("Minuscula: %s\n", auxMin);
    printf("Normal: %s\n", frase);

    return 0;
}