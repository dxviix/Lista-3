#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	char variavel1[50], variavel2[50];
	int i;
	
	printf("Digite um texto: ");
	gets(variavel1);
	
	for(i = 0; variavel1[i] != '\0'; i++){
		variavel2[i] = variavel1[i];
	}
		variavel2[i] = '\0';
		printf("O texto é: ");
	for(i = 0; variavel2[i] != '\0'; i++){
		printf("%c", variavel2[i]);
	}
	
	return 0;
}
