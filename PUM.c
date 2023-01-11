#include <stdio.h>

int main() {

    int i, linhas, j, numero = 1;

    scanf("%d",&linhas);

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < 4; j++) {
            if(numero % 4 == 0) {
                printf("PUM\n");
            } else {
                printf("%d ", numero);
            }
            numero++;
        }
    }

    return 0;
}