#include <stdio.h>
#include <string.h>
#include <Ctype.h>

int main(){
    char frase[50];
    int tam, cont, i;

    cont = 0;

    gets(frase);

    tam = strlen(frase);

    for (i=0; i<tam; i++){
        frase[i] = toupper(frase[i]);
        
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            cont++;
        }
        
    }
        prinf("Quantidade de vogais é igual a: %d\n", cont);
    return 0;
}