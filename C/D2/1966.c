#include <stdio.h>

int main(){
	int t, n, tmp;
    int arr[50];
    
    scanf("%d", &t);
    
    for(int k=1; k<=t; k++){
    	printf("#%d ", k);
        scanf("%d", &n);
        for(int j = 0; j<n; j++){
        	scanf("%d", &arr[j]);
        }//입력 끝
        
        //버블소트
        for(int i=0; i<n-1;i++){
            for(int j=0; j<n-i-1; j++){
         		if(arr[j] > arr[j+1]){
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
         	   }
      	  }
    	}//end of bubblesort
        
        for(int a = 0; a < n; a++){
            printf("%d ", arr[a]);
        }
        printf("\n");
        
        
	}//end of all testcases
}//end of main
