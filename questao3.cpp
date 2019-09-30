#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	char texto1[50], texto2[50];
	int i;
	
	printf("Digite um texto: ");
	gets(texto1);
	printf("Digite mais um texto: ");
	gets(texto2);
	
	for(i = 0; texto1[i] == texto2[i] && texto1[i] != '\0' && i < sizeof(texto1); i++){
	}
	
	if(texto1[i] == '\0' && texto2[i] == '\0'){
		printf("Os textos são iguais.");
		
	}
	else{
		printf("Os textos são diferentes.");
	}
	
	return 0;
}
