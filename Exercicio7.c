#include <stdio.h>

//7) Fa�a um programa que verifique se uma letra digitada � vogal ou consoante.

int main (void) {

	char letra; 
		
	printf("Digite uma letra para ver se ela e vogal ou consoante: ");
	scanf("%c", &letra);
	fflush(stdin);
	
 switch(letra) {
 		
 		default : 
 			printf("Sua letra %c e consoante", letra);
 			break;
 			
		case 'A' : case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U' :case 'u':
			printf("Sua letra %c e vogal", letra);	
			break;
		
 }
	getch();
	return 0;
}
