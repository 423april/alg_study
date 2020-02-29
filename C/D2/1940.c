#include <stdio.h>
#include <math.h>

int main(){
    int t, n;
    int state[30][3]; //index: sec 0: command, 1: accel, 2: speed
    int dist = 0;
    
    scanf("%d", &t);
    for(int k=1; k <= t; k++){
        printf("#%d ", k);
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &state[i][0]);
            if(state[i][0] != 0)
                    scanf("%d", &state[i][1]);
            else state[i][1] = 0;
        }//모든 입력 끝
        
        //speed
        if(state[0][0] != 2)
            state[0][2] = state[0][1]; //1초째 속도는 가속도랑 같으니까 같이 넣어준다.
        else state[0][2] = 0;
        for(int i=1; i < n; i++){
            if(state[i][0] != 2) state[i][2] = state[i-1][2] + state[i][1];
            else state[i][2] = state[i-1][2] - state[i][1];
            
            if(state[i][2] < 0) state[i][2] = 0;
        }
        
/*        printf("command accel speed dist\n");
        for(int i=0; i<n; i++){
            dist += state[i][2];
            printf("%d %d %d %d\n", state[i][0], state[i][1], state[i][2], dist);
        }*/
        
        //거리
        for(int i=0; i < n; i++)
            dist += state[i][2];
        
        printf("%d\n", dist);
        dist = 0;
    }//end of all testcases
    
}//end of main
