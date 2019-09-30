
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	char texto[50];
	char vogais [] = "aeiouAEIOU";
	int i, j, contador = 0;
	
	printf("Escreva um texto para saber quantas vogais ele possui: ");
	gets(texto);
	
	for(i = 0; texto[i] != '\0'; i++){
		for(j = 0; vogais[j] != '\0'; j++){
			if(vogais[j] == texto[i]){
				contador++;
			}
		}
	}
	
	printf("A quantidade de vogais que o texto contem é: %d vogal(is)", contador);	
	
	return 0;
}
