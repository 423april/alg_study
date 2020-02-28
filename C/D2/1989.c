#include <stdio.h>
#include <string.h>

bool palindrome(char* str, int len){
	for(int i=0; i<len/2;i++){
        //printf("%c %c\n", str[i], str[len-1-i]);
    	if(str[i] != str[len-1-i]) return false;
    }
    return true;
}

int main(){
	int t;
    char str[11];
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        printf("#%d ", i);
        scanf("%s", &str);
        //printf("strlen = %d\n", strlen(str));
        if(palindrome(str, strlen(str))) printf("%d\n", 1);
        else printf("%d\n", 0);
    }//end of all test cases
}//end of main
