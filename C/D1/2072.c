#include <stdio.h>

int main(){
	int T;
	int num;
	int sum = 0;
	
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		printf("#%d ", i);
		for(int j = 0; j < 10; j++){
			scanf("%d ", &num);
			if(num%2 != 0) sum += num;
		}
		printf("%d\n", sum);
		sum = 0;
	}
}
