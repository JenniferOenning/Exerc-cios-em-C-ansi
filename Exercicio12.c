#include <stdio.h>

// Faça um programa que leia um número e exiba o dia correspondente da semana. 

int main (void) {
	

	int opcao;

	printf ("-----------------------------------------\n");
	printf ("Digite qual e o dia da semana:\n");
	printf("[ 1 ] - Domingo \n");
	printf("[ 2 ] - Segunda\n");
	printf("[ 3 ] - Terça\n");
	printf("[ 4 ] - Quarta\n");
	printf("[ 5 ] - Quinta\n");
	printf("[ 6 ] - Sexta\n");
	printf("[ 7 ] - Sábado\n");
	printf ("-----------------------------------------\n");
	
	scanf("%i", &opcao);
	fflush(stdin);
	
	switch (opcao) {
		
		default :
			printf ("-----------------------------------------\n");
			printf("opcao invalida!\n");
			printf ("-----------------------------------------\n");
			break;
			;
		case 1 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e domingo!\n");
			printf ("-----------------------------------------\n");
			break;
			;
		case 2 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Segunda!\n");
			printf ("-----------------------------------------\n");
			break;
			;
		case 3 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Terça!\n");
			printf ("-----------------------------------------\n");
			break;
			;
		case 4 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Quarta!\n");
			printf ("-----------------------------------------\n");
			break;
			;
		case 5 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Quinta!\n");
			printf ("-----------------------------------------\n");
			break;
			;
			
		case 6 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Sexta!\n");	
			printf ("-----------------------------------------\n");
			break;
			;
						
		case 7 : 
			printf ("-----------------------------------------\n");
			printf("Hoje e Sábado!\n");	
			printf ("-----------------------------------------\n");
			break;
			;
	}
	
	
	getch ();
	return;
}

