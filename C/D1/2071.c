#include <stdio.h>
#include <math.h>

int main(){
	int T;
	int num;
	int sum = 0;
	int avg = 0;
	
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		printf("#%d ", i);
		for(int j = 0; j < 10; j++){
			scanf("%d ", &num);
			sum += num;
		}
		avg = round((float)sum/10);
		printf("%d\n", avg);
		sum = 0;
		avg = 0;
	}
}
