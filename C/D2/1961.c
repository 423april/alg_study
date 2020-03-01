#include <stdio.h>

int main(){
    int t, n;
    int matrix[7][7];
    
    scanf("%d", &t);
    for(int k = 1; k<= t; k++){
        printf("#%d\n", k);
        scanf("%d", &n);
        //input matrix
        for(int i = 0; i < n; i++)
            for(int j=0; j < n; j++)
                scanf("%d", &matrix[i][j]);
        //end of matrix input
        
        for(int i = 0; i < n; i++){
            //90도 회전
            for(int j = n-1; j >= 0; j--)
                printf("%d", matrix[j][i]);
            printf(" ");
            
            //180도 회전
            for(int j = n-1; j >= 0; j--)
                printf("%d", matrix[n-i-1][j]);
            printf(" ");
            
            //270도 회전
            for(int j = 0; j < n; j++)
                printf("%d", matrix[j][n-i-1]);
            printf("\n");
        }
        
        
    }
}
