#include<stdio.h>

	int main (){
		int i; float numero[10];
		for (i=0; i<10; i++){
			printf("informe o %d. numero: ",i);
			scanf("%f", &numero[i]);
			}
		for (i=9; i>=0; i--)
			printf("%.2f,", numero[i]);
		
	return 0;
	}
