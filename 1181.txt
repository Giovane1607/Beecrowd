#include <stdio.h>

int main () {
	
	float M[12][12], elemento,Soma=0,Media=0;
	int i,j,linha;
	char T; 
	
	//Lendo operação e linha 
	scanf("%d %c", &linha, &T);
	//preenchendo a matriz
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%f", &elemento);
			M[i][j] = elemento;
		}
	}
	// Operação Soma
	if(T == "S"){
		i = linha;
		while(i==linha){
			for(j=0; j<12; j++){
				Soma += M[i][j];
			}
		i++;
		}
		printf("%.1f\n", Soma);	
	}
	else{ if(T=="M"){
		i = linha;
		while(i==linha){
			for(j=0; j<12; j++){
				Media += M[i][j];
			}
		i++;
		}
		printf("%.1f\n", Media/12);
	}
	}
	
	
	
	
	return 0;
}