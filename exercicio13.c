#include <stdio.h>

//Fazer um programa que leia a idade de quatro alunos e apresente a mensagem se e turma jovem, adulta ou idosa.

int main (void) {
	
	int i1 ,i2 ,i3, i4, media; 

	printf("Digite a idade dos quatro alunos: ");
	scanf("%i%i%i%i", &i1, &i2, &i3, &i4);
	fflush(stdin);		
	
	media = (i1+i2+i3+i4) / 4; 
	
	
	if (media >= 1 && media < 25) {
		printf("%i ano(s), tem que ficar na turma jovem!", media);
	}
	
	else if (media >= 25 && media <= 40) {
		printf("%i ano(s), tem que ficar na turma adulta!", media);
	}
	
	else if (media > 40)  {
		printf("%i ano(s), tem que ficar na turma idosa!!", media);
	}
	
	else {
		printf("A media %i e invalida!", media);
	}
	
	getch();
	return;
}
