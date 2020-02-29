#include <stdio.h>

const int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//사이 달의 날짜들을 더해주는 함수
int btw(int mon1, int mon2){
    int sum = 0;
    for(int i =1; i <= 12; i++)
        if(i > mon1 && i < mon2) sum += months[i];
   return sum;
}

int main(){
	int t;
    int date1[2], date2[2];
    int result = 0;
    
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
    	printf("#%d ", i);
        scanf("%d %d %d %d", &date1[0], &date1[1], &date2[0], &date2[1]);
        
        //같은 달일때 
        if(date1[0] == date2[0]) result = date2[1] - date1[1] + 1;
        else{ //다른달일때
            result += months[date1[0]] - date1[1] + 1;
            result += date2[1];
            result += btw(date1[0], date2[0]);
        }
        printf("%d\n", result);
        result = 0;
    }
}
