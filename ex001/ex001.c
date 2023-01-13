#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma loja vende bicicletas com um acr�scimo de 50% sobre o pre�o de custo. 
Ela paga a cada vendedor 2 sal�rios m�nimos mensais, mais uma comiss�o de 15% sobre o pre�o de custo de cada
bicicleta vendida, dividida igualmente entre eles. 

Escreva um algoritmo que leia o n�mero de
empregados da loja, o valor do sal�rio m�nimo, o pre�o de custo de cada bicicleta, o n�mero de
bicicletas vendidas, calcule e escreva: o sal�rio total de cada empregado e o lucro l�quido da loja.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_empregados, qtd_bikes_vendidas;
	float salario_min, custo_bike, salario_total, lucro_empresa, comissao;
	
	printf("Quantas empregados a loja tem? ");
	scanf("%d", &qtd_empregados);
	
	printf("\nQual o valor do sal�rio m�nimo? ");
	scanf("%f", &salario_min);
	fflush(stdin);
	
	printf("\nQual o custo de cada bicicleta? ");
	scanf("%f", &custo_bike);
	
	printf("\nQuantas bicicletas foram vendidas? ");
	scanf("%d", &qtd_bikes_vendidas);
	fflush(stdin);
	
	salario_total = (2 * salario_min) + (0.15 * custo_bike * qtd_bikes_vendidas)/qtd_empregados;
	
	printf("%f\n", comissao);
	printf("O sal�rio total de cada empregado � %.2f", salario_total);
	
	
	return 0;
}
