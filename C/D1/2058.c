#include <stdio.h>
#include <math.h>

int main(){
	int N;
	int num[4];
	int sum=0;
	
	scanf("%d", &N);
	
	for(int i = 3; i > 0; i--){
		num[i] = N / (pow(10,i));
		N = N % (int)(pow(10,i));
        //printf("num=%d, N=%d \n", num[i], N);
	}
	num[0] = N;

	for(int i = 0; i < 4; i++){
       // printf("%d ", num[i]);
		sum += num[i];
	}
	
	printf("%d\n", sum);
}//end main
