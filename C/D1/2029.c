#include <stdio.h>
#include <string.h>

int main(){
	int t;
	int a, b;
	
	scanf("%d", &t);
	for(int i = 1;i <= t; i++){
		printf("#%d ", i);
		scanf("%d %d", &a, &b);
		printf("%d %d\n", a/b, a%b);
    }
}//end main
