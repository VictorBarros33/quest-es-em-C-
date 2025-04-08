#include<stdio.h>

int main () {
    int num[2000];
    long i, j, maior, menor; 
    printf(" Digite a quantidade de numeros: ");
    scanf("%d", &j);
    for(i=0; i<j; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &num[i]);}
    maior= num[0];
    menor= num[0];
    i = 0;
    do {
        if (maior<num[i])
        maior = num[i];
        if (menor>num[i])
        menor = num[i];
        i++;}
    while (i<j);
    printf("Menor numero: %d \n", menor);
    printf("Maior numero: %d \n", maior);
    
	return 0;
	}
