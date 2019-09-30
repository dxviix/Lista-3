#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	char texto1[50], texto2[50], final[100];
	int i, x, y;
	
	printf("Digite um texto: ");
	gets(texto1);
	printf("Digite outro texto: ");
	gets(texto2);
	
	for(x = 0; texto1[x] != '\0'; x++){
		final[x] = texto1[x];
	}	
	for(y = 0; texto2[y] != '\0'; y++){
		final[x] = texto2[y];
		x++;
		final[x] = '\0';
	}			
		printf("\nA concatenação dos dois nomes é %s", final);
	
	return 0;
}
