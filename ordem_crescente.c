#include<stdio.h>
	int main(){
		int nums[10];
		int i, j;
		for(i=0; i<10; i++){
			printf("\n Informe o %d numero: ", i+1);
			scanf("%d", &nums[i]);
			for(j=i; j>0;j--){
				if(nums[j]<nums[j-1]){
					nums[j]=nums[j-1]+nums[j];
					nums[j-1]=nums[j]-nums[j-1];
					nums[j]= nums[j]-nums[j-1];
					
				}
				else
					break;
			}
		}
		for(j=0; j<i; j++)
			printf("%d, ", nums[j]);
			
			return 0;
	}
