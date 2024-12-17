#include<stdio.h>
int main(){
	int n, sum = 0;
	
	printf("nhap so nguyen duong n: ", n);
	scanf("%d", &n);
	
	if(n <= 0){
		printf("so nhap ko hop le");
		return 1;
	}
	
	for(int i = 1; i <= n; i++ ){
		sum += i;
	}
	
		printf("sum = %d ", sum);
	
	
	return 0;
}