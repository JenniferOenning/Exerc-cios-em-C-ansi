#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//10) Faça um programa que implemente uma calculadora simples.

int main (void) {

	int opcao, final;
	float n1, n2, tot;
	setlocale(LC_ALL, "Portuguese");

	printf("----------------------------- \n ");
	printf("  Qual operacao voce deseja?   \n ");
	printf("[ 1 ] - Adição				  \n ");
	printf("[ 2 ] - Subtração             \n ");	
	printf("[ 3 ] - Multiplicação         \n ");
	printf("[ 4 ] - Divisão               \n ");
	printf("[ 5 ] - Fim                   \n ");
	printf("----------------------------- \n ");
		
	scanf("%i", &opcao);
	fflush(stdin);
	
	switch(opcao) {
		
		default: 
		
			printf("Essa opcao e invalida, tente novamente.");
			break; 
		
		case 1:
			printf("Digite dois numeros para serem somados: \n ");
			scanf("%f%f", &n1, &n2);
			
			tot = n1 + n2; 
			
			printf("A soma de %f + %f será de %f", n1, n2, tot);
		
			break;
			
		case 2:
		
			printf("Digite dois numeros para serem subtraidos: \n ");
			scanf("%f%f", &n1, &n2);
			
			tot = n1 - n2; 
			
			printf("A subtração de %f - %f sera de %f", n1, n2, tot);
		
			break;
			
		case 3:
		
			printf("Digite dois numeros para serem multiplicados: \n ");
			scanf("%f%f", &n1, &n2);
			
			tot = n1 * n2; 
			
			printf("O produto da multiplicação de %f * %f sera de %f", n1, n2, tot);
		
			break;
			
		case 4:
			
			printf("Digite o dividendo: \n ");
			
			scanf("%f", &n1);
			
			printf("Digite o divisor: \n ");
			
			scanf("%f", &n2);
			
			tot = n1 / n2; 
			
			if (n2 == 0) {
		
			printf("Voce nao consegue dividir por 0");
			
			}
			
			else {
				printf("O produto da divisão de %f / %f será de %f", n1, n2, tot);
			}
			
			break;
	
			
			case 5: 
				
			printf("Voce quer que finalize o programa? \n");	
			printf("[ 1 - SIM ]\n");
			printf("[ 2 - NÃO ]\n");
			scanf("%i", &final);
			fflush(stdin);
			
			switch (final) {
				case 1: 
				printf("Programa finalizado!");
				return;
				
				case 2: 
				return 0;
				
			}
	
	}
	getch();
	return;
}
