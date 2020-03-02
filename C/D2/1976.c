#include <stdio.h>
#include <math.h>

typedef struct{
    int h;
    int m;
}time;

int main(){
	int t;
    time t1, t2, t3;
    int am, ah; //올림값
    
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
    	printf("#%d ", k);
        scanf("%d %d %d %d", &t1.h, &t1.m, &t2.h, &t2.m);
        
        t3.h = t1.h + t2.h;
        t3.m = t1.m + t2.m;
        if(t3.m > 60){
        	ah = t3.m/60;
            t3.h += ah;
            t3.m -= 60;
        }
        if(t3.h > 12){
        	t3.h -= 12;
        }
        
        printf("%d %d\n", t3.h, t3.m);
    }
}
