// projeto sobre funções 

int soma( int x, int y){
	return x+y;
}

int main (){
	int x, y, res; 
	
	printf("Digite o 1. Numero: \n");
	scanf("%d", &x);
	
	printf("Digite o 2. Numero: \n");
	scanf("%d", &y);
	
	res = soma(x, y);
	
	printf("Esse e o resultado da soma entre %d e %d: \n %d", x, y, res);
}
