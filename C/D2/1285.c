#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, n;
    int input, ppl, mindist;
    
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
        printf("#%d ", k);
        scanf("%d", &n);
        ppl = 0;
        mindist = 100000;
        for(int i = 0; i < n; i++){
            scanf("%d", &input);
            if(abs(input) < mindist){
                ppl = 1;
                mindist = abs(input);
            }
            else if(abs(input) == mindist)
                ppl++;
        }
        printf("%d %d\n", mindist, ppl);
    }
}
