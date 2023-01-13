#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Escreva um algoritmo que mostre quantas horas, 
minutos e segundos existem em uma quantidade de segundos fornecida pelo usuário. 
A resposta deverá seguir o formato hh:mm:ss para apresentar o resultado. */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tempo, horas, minutos, segundos;
	
	printf("Insira um valor em segundos: ");
	scanf("%d", tempo);
	
	horas = tempo / 3600;
	printf("%d", horas);
	
	return 0;
}
