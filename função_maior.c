// projeto sobre função

float maior(float x, float y){
	if (x>y)
		return x;
	else 
		return y;
}

int main (){
	float x, y, res;
	
	printf("Digite o 1. numero: \n");
	scanf("%f", &x);
	
	printf("Digite o 2. numero: \n");
	scanf("%f", &y);
	
	res = maior(x, y);
	printf("O maior entre %.1f e %.1f e: \n %.1f", x, y, res);
}
