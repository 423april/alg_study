#include <stdio.h>

int main(){
	int t;
    int p, q, s, r, w;
    int a, b;
    scanf("%d", &t);
    for(int i=1; i <= t; i++){
        printf("#%d ", i);
        scanf("%d %d %d %d %d", &p, &q, &r, &s, &w);
        a = w * p; 										//printf("a: %d\n", a);
		b = (w <= r)? q : q + (w-r) * s;         //printf("b: %d\n", b);
        if(a<b) printf("%d\n", a);
        else printf("%d\n", b);
    }//end of all test cases
   
}//end main
