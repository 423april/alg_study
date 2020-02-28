#include <stdio.h>
#include <string.h>
bool check[10] = {false};

void checkDigit(int n){
    int c;
    while(n/10){
        c = n%10;
        check[c] = true;
        n /= 10;
    }
    c = n%10;
    check[c] = true;
    return;
}

bool allChecked(){
    for(int i=0; i<10; i++){
       if(!check[i])  return false;
    }
    return true;
}

void printChecked(){
    for(int i=0; i<10; i++){
        if(check[i]) printf("%d ", i);
    }
    printf("\n");
}

int main(){
	int t, n;
    int k=1;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
    	printf("#%d ", i );
        scanf("%d", &n);
        while(!allChecked()){
            checkDigit(k*n);
            //printf("k=%d, n=%d: ", k, k*n);
            //printChecked();
            k++;
        }//all digits checked
        printf("%d\n", (k-1)*n);
        memset(check, false, sizeof(check));
        k=1;
    }//end of all test cases
}//end main
