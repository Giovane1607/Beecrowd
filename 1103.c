/*utilizando funÃ§Ã£o com retorno*/
#include <stdio.h>

int despertador(int h1,int m1,int h2,int m2){

    int m, h, total;

    m = m2 - m1;
    h = h2 - h1;

    if (m < 0){
        m+=60;
        h--;}
    if (h < 0)
        h+=24;
    
    total = (h * 60) + m;
    return total;
}

int main(){
    int h1, m1, h2, m2, min;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    min = despertador(h1, m1, h2, m2);

    printf("%d", min);
}