#include <stdio.h>
#include <math.h>

int main(){
	int N;
	int num[200];
	int tmp;
	
	scanf("%d", &N);
	for(int i = 0; i <= N; i++){
		scanf("%d ", &num[i]);
	}//end of input
	
	//bubble sort
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N-1-i; j++){
			if(num[j] > num[j+1]){
				tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
			}
		}
	}//end bubblesort

	/*for(int i = 0; i < N; i++){
		printf("%d ", num[i]);
	}*/
	
	printf("%d\n", num[N/2]);
}//end main
