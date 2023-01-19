#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa em C que leia um valor inteiro e verifique se este valor � o dobro de um
n�mero. Se for o dobro de um n�mero, escreva que n�mero � esse. Caso n�o seja, imprima a seguinte
mensagem: "O <valor> n�o � o dobro de qualquer n�mero.". Por exemplo, 14 � o dobro de 7
(resposta sim), enquanto que 15 n�o � o dobro de nenhum n�mero. */


int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorRecebido, metade;

    printf("Insira um valor: ");
    scanf("%d", &valorRecebido);

    if (valorRecebido % 2 == 0){
        metade = valorRecebido/2;
        printf("\nSim, %d � o dobro de %d.", valorRecebido, metade);
    }

    else{
        printf("\nO %d n�o � o dobro de qualquer n�mero.\n", valorRecebido);
    }

    return 0;
}
