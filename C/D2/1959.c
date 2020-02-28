#include <stdio.h>

//shorter array always goes to sh
int calc(int* sh, int shlen, int * lo, int lolen){
    //printf("%d %d\n", shlen, lolen);
	int prodsum = 0;
    int max = 0;
    for(int i = 0; lolen-1 >= i+shlen-1; i++){
        //printf("i = %d: \n", i);
    	for(int j=i; j < i+shlen; j++){
        	prodsum += sh[j-i] * lo[j];
        }
        max = (prodsum > max)? prodsum : max;
        prodsum = 0;
    }
    return max;
}
    

int main(){
	int t, alen, blen;
    int a[20], b[20];
    int max = 0;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
		printf("#%d ", i);
        
        //input for this testcase
        scanf("%d %d", &alen, &blen);
        for(int j=0; j<alen;j++){
            scanf("%d", &a[j]);
        }
        for(int j=0; j<blen;j++){
            scanf("%d ", &b[j]);
        }
        //end of input
        if(alen > blen) printf("%d\n", calc(b, blen, a, alen));
		else printf("%d\n", calc(a, alen, b, blen));
		
    }
}
