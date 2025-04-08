#include <stdio.h>
	int main(){
		int v[5]={10, 20, 30, 40, 50};
		int i;
		float s;
		for(i=0; i<5; i++){
			s+=v[i];
		}
		printf("Resultado: %.2f ", s/5);
		
		return 0;
	}
