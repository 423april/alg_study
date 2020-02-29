#include <stdio.h>
#include <string.h>

int main(){
    int t;
    int map[15][15];
    int n, k;
    int sum = 0;
    int total = 0;
    
    scanf("%d", &t);
    for(int l=1; l<= t; l++){
        printf("#%d ", l);
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &map[i][j]);
            }
        }//모든 입력 끝
        
        
        //가로 자리 확인
        for(int i = 0; i < n; i++){
            //printf("i = %d\n", i);
            for(int j = 0; j < n-1; j++){
                sum += map[i][j];
                if(map[i][j+1] == 0){
                    //printf("if 들어옴 sum = %d\n", sum);
                    if(sum == k) total++;
                    sum = 0;
                    continue;
                }
                if(j == n-2 && sum+map[i][j+1] == k){
                    //printf("%d\n", sum+map[i][j+1]);
                    total++;
                    sum = 0;
                }
            }//한 가로줄 끝냄
            sum = 0;
        }//모든 가로자리 확인 끝
        
        //세로자리 확인
         for(int i = 0; i < n; i++){
            //printf("i = %d\n", i);
            for(int j = 0; j < n-1; j++){
                sum += map[j][i];
                if(map[j+1][i] == 0){
                    //printf("if 들어옴 sum = %d\n", sum);
                    if(sum == k) total++;
                    sum = 0;
                    continue;
                }
                if(j == n-2 && sum+map[j+1][i] == k){
                    //printf("%d\n", sum+map[j+1][i]);
                    total++;
                    sum = 0;
                }
            }//한 세로줄 끝냄
            sum = 0;
        }//모든 세로자리 확인 끝
        
        printf("%d\n", total);
        total = 0;
        
    }//end of all testcases
}//end of main
