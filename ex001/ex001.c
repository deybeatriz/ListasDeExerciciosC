#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma loja vende bicicletas com um acréscimo de 50% sobre o preço de custo. 
Ela paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 15% sobre o preço de custo de cada
bicicleta vendida, dividida igualmente entre eles. 

Escreva um algoritmo que leia o número de
empregados da loja, o valor do salário mínimo, o preço de custo de cada bicicleta, o número de
bicicletas vendidas, calcule e escreva: o salário total de cada empregado e o lucro líquido da loja.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_empregados, qtd_bikes_vendidas;
	float salario_min, custo_bike, salario_total, lucro_empresa, comissao;
	
	printf("Quantas empregados a loja tem? ");
	scanf("%d", &qtd_empregados);
	
	printf("\nQual o valor do salário mínimo? ");
	scanf("%f", &salario_min);
	fflush(stdin);
	
	printf("\nQual o custo de cada bicicleta? ");
	scanf("%f", &custo_bike);
	
	printf("\nQuantas bicicletas foram vendidas? ");
	scanf("%d", &qtd_bikes_vendidas);
	fflush(stdin);
	
	salario_total = (2 * salario_min) + (0.15 * custo_bike * qtd_bikes_vendidas)/qtd_empregados;
	
	printf("%f\n", comissao);
	printf("O salário total de cada empregado é %.2f", salario_total);
	
	
	return 0;
}
