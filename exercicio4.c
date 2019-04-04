#include <stdio.h>
//4) Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa.

int main (void){	

	int num, resto;
	
	printf("Digite um numero: ");
	scanf("%i" , &num);
		
	resto = num % 2;
	
	if( resto == 0  + 1 ) {
	printf("Seu numero %i + 1 fica: Par", num);
}

	else if (resto == 0 && resto - 1){
	printf("Seu numero %i - 1 fica: Impar", num);
}


		
	getch();
	return 0;
}
