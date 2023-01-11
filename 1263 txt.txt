#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct{

	char frase[60];

} string;


void main ()
{
	unsigned short i, j;
	string palavras[300];
	char texto[10000], *palavraTmp;

	while (scanf(" %[^\n]", texto) != EOF)
	{
		i = 0;
		palavraTmp = strtok(texto, " ");
		strcpy(palavras[i++].frase, palavraTmp);
		do
		{

			palavraTmp = strtok('\0', " ");

			if (palavraTmp)
				strcpy(palavras[i++].frase, palavraTmp);

		} while (palavraTmp);	
		j = 1;
		unsigned short alteracoes = 0;
		unsigned short contaLetras = 0;

		while (j < i)
		{

			while (tolower(palavras[j].frase[0]) == tolower(palavras[j - 1].frase[0]))
			{
				contaLetras += 2;
				j++;
			}

			j++;
			if (contaLetras >= 2)
				alteracoes++;

			contaLetras = 0;

		}
		printf("%hu\n", alteracoes);
	}

}