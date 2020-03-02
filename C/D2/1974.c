#include <stdio.h>

int main(){
	int t;
    int map[9][9];
    int sum, result;
    
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
    	printf("#%d ", k);
	//reinitialization
        sum = 0;
        result  = 1;
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &map[i][j]);
         		sum += map[i][j];
            }
            if(sum != 45) result = 0;
            sum = 0;
        }
        //end of input
        
        if(result == 1){
        //세로줄 확인하기
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    sum += map[j][i];
                }
                if(sum != 45)	result = 0;
                sum = 0;
            }
        }
        
        if(result == 1){
        	for(int i = 0; i < 9; i += 3){
                for(int j = 0; j < 9; j += 3){
                    for(int k = 0; k < 3; k++){
                        for(int l = 0; l < 3; l++){
                            sum += map[i+k][j+l];
                        }
                    }
                    if(sum != 45) result = 0;
                    sum = 0;
                }
            }
        }
        
        printf("%d\n", result);
    }//end of testcases
}//end of main
