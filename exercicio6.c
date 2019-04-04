#include <stdio.h>
#include <math.h>

//6) Faça um programa que verifique se a letra digitada for: F ou M e 
//imprima uma mensagem: masculino, feminino ou sexo inválido.

int main (void){
	
	//variavel
    char opcao;
    
    //entrada
    printf("------------------------\n");
    printf(" M \n");
    printf(" F \n");
    printf("------------------------\n");
    
    printf("Digite seu sexo:");
    scanf("%c",&opcao);
    fflush(stdin);
    
    //saida
    switch (opcao){
    	
    case 'F':
    printf("\nSeu sexo e Feminino\n");
    printf("------------------------\n");
    break;
    
    case 'M':
    printf("\n Seu sexo e Masculino\n");
    printf("------------------------\n");
    break;  
	       
    default:
    printf("\nERRO\n");
    }
    
    getch();
}

