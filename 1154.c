#include <stdio.h>
 
int main() {
 
  int entrada, i;
  float soma;
 
  i = 1;
  
  scanf("%d", &entrada);
  soma = entrada;
  
  while(entrada > 0){
    scanf("%d", &entrada);
    if(entrada > 0){
      soma += entrada;
      i++;
    }
 }
 
 printf("%.2f\n", soma/i);
 
 
}