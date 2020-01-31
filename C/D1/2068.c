#include <stdio.h>
#include <math.h>

int main(){
	int T;
	int num;
	int max = 0;
	
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		printf("#%d ", i);
		for(int j = 0; j < 10; j++){
			scanf("%d ", &num);
			max = (num > max)? num : max;
		}
		printf("%d\n", max);
		max = 0;
	}
}
