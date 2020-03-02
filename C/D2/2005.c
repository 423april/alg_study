#include <stdio.h>

int main(){
    int t, n;
    int tri[10][10];
    
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
        printf("#%d\n", k);
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
         		if(j == 0 || j == i) tri[i][j] = 1;
                else{
                	tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
                }
                printf("%d ", tri[i][j]);
            }
            printf("\n");
        }
}
}
