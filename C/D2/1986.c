
#include <stdio.h>

int main(){
	int t, n;
    int sum=0;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
    	printf("#%d ", i);
        scanf("%d", &n);
        for(int j=1; j<=n;j++){
            	if(j%2) sum += j;
            	else sum -= j;
        }
        printf("%d\n", sum);
        sum = 0;
    }
}
