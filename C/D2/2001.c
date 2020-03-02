#include <stdio.h>

int main(){
	int t, n, m;
    int map[15][15];
    int sum, max;
    
    scanf("%d", &t);
    for(int a = 1; a <= t; a++){
    	printf("#%d ", a);
        scanf("%d %d", &n, &m);
        sum = 0;//reinitialize
        max = -1;
        
        for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
                scanf("%d", &map[i][j]);
        //end of input
        
        for(int i = 0; i <= n-m; i++){
            for(int j = 0; j <= n-m; j++){
                for(int k = 0; k < m; k++){
                    for(int l = 0; l < m; l++){
                        sum += map[i+k][j+l];
                    }
                }
                if(max < sum) max = sum;
                //printf("%d\n", sum);
                sum = 0;
            }
        }
        printf("%d\n", max);
    }//end of all testcase
}//end of main
