#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char str[31];
    char word[11];
    int len = 10;
    int flag = 0;
    
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        printf("#%d ", i);
        scanf("%s", &str);
        //마디 길이별로 비교
        for(int j=1; j <= 10; j++){
            strncpy(word, str, j);
            //printf("entire string: %s\nword: %s\n", str, word);
            //printf("size of word: %d\n", j);
            for(int k=j; k < strlen(str) && k+j < strlen(str); k=k+j){
                if(strncmp(str+k, word, j)!=0) {
                    //fwrite(str+k, 1, j, stdout);
                    //printf("\nword doesn't match\n");
                    flag = 1;
                    break;}
                len = j;
            }
            if(flag != 0) {
                flag = 0;
                continue;
            }
            else break;
        }//모든 마디 다 비교함
        printf("%d\n", len);
        len = 10;
        flag = 0;
        memset(word, '\0', sizeof(word));
    }//end of all testcases
}//end main
