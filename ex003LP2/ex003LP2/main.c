#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa em C que leia um valor inteiro e verifique se este valor é o dobro de um
número. Se for o dobro de um número, escreva que número é esse. Caso não seja, imprima a seguinte
mensagem: "O <valor> não é o dobro de qualquer número.". Por exemplo, 14 é o dobro de 7
(resposta sim), enquanto que 15 não é o dobro de nenhum número. */


int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorRecebido, metade;

    printf("Insira um valor: ");
    scanf("%d", &valorRecebido);

    if (valorRecebido % 2 == 0){
        metade = valorRecebido/2;
        printf("\nSim, %d é o dobro de %d.", valorRecebido, metade);
    }

    else{
        printf("\nO %d não é o dobro de qualquer número.\n", valorRecebido);
    }

    return 0;
}
