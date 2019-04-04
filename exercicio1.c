#include <stdio.h>
#include <math.h>
// 1) Faça um programa que peça dois números e imprima o maior deles.


int main(void){
    int numero1, numero2;
    printf("Primeiro numero: ");
    scanf("%i",&numero1);
    fflush(stdin);
    printf("Segundo numero : ");
    scanf("%i",&numero2);
    fflush(stdin);

    if (numero1 > numero2){
        printf("%i", numero1);
    }else{ 
        printf("%i", numero2);
    }
    getch();
    return 0;
}

