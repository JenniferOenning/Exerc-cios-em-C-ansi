#include <stdio.h>

//11) Faça um programa que pergunte em que turno você estuda.Se é M (matutino), V (vespertino) ou N (norturno).

int main (void) {

	char opcao;
	setlocale(LC_ALL, "Portuguese");

	printf("----------------------------- \n ");
	printf("  Que turno voce estuda?      \n ");
	printf("[ M ] - Matutino		      \n ");
	printf("[ V ] - Vespertino            \n ");	
	printf("[ N ] - Noturno               \n ");
	printf("----------------------------- \n ");
		
	scanf("%c", &opcao);
	fflush(stdin);
	
	switch(opcao) {
		
		default: 
			printf("------------------------------------- \n ");
			printf("Essa opcao e invalida, tente novamente.");
			printf("------------------------------------- \n ");
			break; 
		
		case 'M':
			printf("----------------------------- \n ");
			printf("Bom dia! \n ");
			printf("----------------------------- \n ");
			break;
			
		case 'V':
			printf("----------------------------- \n ");
			printf("Boa tarde! \n ");
			printf("----------------------------- \n ");
			break;
			
		case 'N':
			printf("----------------------------- \n ");
			printf("Boa noite!\n ");
			printf("----------------------------- \n ");
			break;
	}
	getch();
	return;
}

