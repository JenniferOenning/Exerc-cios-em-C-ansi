#include <stdio.h>
#include <math.h>

//8) Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

int main (void){
	
	//variavel
	float a, b, c;
    
    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%f",&a);
    fflush(stdin);
    
    printf("Digite o segundo numero: ");
    scanf("%f",&b);
    fflush(stdin);
    
    printf("Digite o terceiro numero: ");
    scanf("%f",&c);
    fflush(stdin);
    
    //saida
    
    if ( a < b && b < c) {
    	printf ("E %f > %f > %f", a, b, c);
    } else if (a < b && c < b) {
    	printf ("E %f > %f > %f", a, b, c);
    } else if (b < a && a < c) {
    	printf ("E %f > %f > %f", a, b, c);
    } else if (b < a && c < a) {
    	printf ("E %f > %f > %f", a, b, c);
    } else if (c < a && a < b) {
    	printf ("E %f > %f > %f", a, b, c);
    } else {
    	printf ("E %f > %f > %f", a, b, c);
    }

    getch();
}

