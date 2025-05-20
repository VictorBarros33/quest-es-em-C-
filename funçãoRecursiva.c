// Escreva um algoritimo que solicite ao usuario um numero inteiro positivo e apresente 
// ao final a somatoria de todos os inteiros positivos até o numero informado  
#include<stdio.h>
#include<conio.h>

float SomaAntecessoresNormal(int valor){
	int	i, soma=0;
	for ( i=1; i<=valor; i++)
		soma = soma + i;
	return(soma);
}

float SomaAntecessoresRecursivas(int valor){
	int soma;
	if (valor == 1)
		return(1); //condição de parada...
	else{
		soma = valor + SomaAntecessoresRecursivas(valor-1);//chamada recursiva
		return(soma);
	}
}

int main(){
	float num1, num2, soma;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
		printf("A soma dos antecessore recursiva e: %.2f\n", SomaAntecessoresNormal(num1));
		printf(" A soma dos antecessore normal e: %.2f\n", SomaAntecessoresRecursivas(num1));
	return 0;
}
