#include <stdio.h>
//3) Fa�a um programa que pe�a um n�mero e imprima se o n�mero � par ou �mpar.

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
