#include <stdio.h>
//4) Fa�a um programa que pe�a um n�mero e se este n�mero for par, transforme-o em �mpar e vice-versa.

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
