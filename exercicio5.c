#include <stdio.h>

//5) Faça um programa que peça um número e informe se o número é inteiro ou quebrado.

int main (void){	

	float num;
	int aux;
		
	printf("Digite um numero: ");
	scanf("%f" , &num);
	fflush(stdin);
	
	aux = num;
		
	
	if(	num == aux ) {
	printf("Seu numero %f e inteiro", num);
}

	else {
	printf("Seu numero %f e quebrado", num);
}


		
	getch();
	return 0;
}
