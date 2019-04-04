#include <stdio.h>

//9) fazer um programa que imprima se você foi aprovado, reprovado, recuperação ou distinção.

int main (void) {
	
	float media, nota1, nota2, nota3; 	

	printf("Digite a primeira nota:  ");
	scanf("%f", &nota1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	fflush(stdin);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if  (media == 10 ) {
		printf("Sua media foi aprovada com distincao!", media);
	}	
	
	else if (media >= 7 && media < 10) {
		printf("Voce foi aprovado aprovado!", media);
	}
	
	else if (media <= 7 && media >= 4) {
		printf("Voce esta de recuperacao!", media);
	}
	
	else if (media <= 4){
		printf("Voce foi reprovado!, ", media);
	}
	
	getch();
	return;
}
