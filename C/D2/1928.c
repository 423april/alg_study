#include <stdio.h>
#include <string.h>

int decodeC2I(char c){
	if(c >= 'A' && c <= 'Z') return (int)c - 65;
    else if(c >= 'a' && c <= 'z') return (int)c - 71;
    else if(c >= '0' && c <= '9') return (int)c + 4;
    else if(c == '+') return 62;
    else return 63;
}

int main(){
    char enStr[100001]; //Base64로 암호화된 스트링
    int t;
    unsigned char val[4];
    char deStr[75001];
    int flag = 0;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
    	printf("#%d ", i);
    	scanf("%s", &enStr);
        //입력받은 스트링을 4개씩 끊어서 decode한다
        for(int j=0; j < strlen(enStr); j=j+4){
            //4개의 char 값을 상응하는 Base64 int 값으로 변환한다.
        	for(int k=0; k < 4; k++){
            	val[k] = decodeC2I(enStr[j+k]);
                //printf("%c %d\n", enStr[j+k], val[k]);
            }
            //4개의 int값을 3개의 ASCII char값으로 변환한다.
            //printf("flag: %d\n", flag);
           deStr[flag] = (val[0] << 2) + (val[1] >> 4); //printf("%d %d %d\n", val[0]<<2, val[1]>>4, deStr[flag]);
           deStr[flag+1] = (val[1] << 4) + (val[2] >> 2); //printf("%d %d %d\n", val[1]<<4, val[2]>>2, deStr[flag+1]);
           deStr[flag+2] = (val[2] << 6) + (val[3]); //printf("%d %d %d\n", val[2]<<6, val[3], deStr[flag+2]);
            
            //printf("%c %c %c\n", deStr[flag], deStr[flag+1], deStr[flag+2]);
            //printf("%d %d %d\n", deStr[flag], deStr[flag+1], deStr[flag+2]);
            flag += 3; //다음 loop에 쓰기 위해 flag값 3 증가
        }//하나의 스트링 모두 decode됨.
        printf("%s\n", deStr);
        flag = 0;
    }//end test case
}//end main
