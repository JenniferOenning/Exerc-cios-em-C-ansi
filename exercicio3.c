#include <stdio.h>
//3) Faça um programa que peça um número e imprima se o número é par ou ímpar.

int main (void){	

	int numero1, resto;
	
	printf("Digite um numero: ");
	scanf("%i" , &numero1);
		
	resto = numero1 % 2;
	
	if( resto == 0 ) {
	printf("Par");
}

	else {
	printf("Impar");
}
		
	getch();
	return 0;
}
