#include <stdio.h>
#include <math.h>

int main(){
	int T;
	int num[2];
	
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		printf("#%d ", i);
		for(int j = 0; j < 2; j++){
			scanf("%d ", &num[j]);
		}
		if(num[0] < num[1]) printf("<\n");
		else if(num[0] > num[1]) printf(">\n");
		else printf("=\n");
	}
}
