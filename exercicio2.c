#include <stdio.h>

//2) Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

int main (void){	

	int numero1;
	
	printf("Digite um numero: ");
	scanf("Negativo %i" , &numero1);
	
	if (numero1 != numero2) {
		printf("E Negativo %i", numero1);
	}
	
	else if (numero1 < numero2) {
		printf("E Positivo %i", numero2);
	}
	
	else {
		printf("Sao iguais");
	}
		
	getch();
	return 0;
}
