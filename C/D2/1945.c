#include <stdio.h>
#include <math.h>

int main(){
	int t, n;
    int a, b, c, d, e;
    scanf("%d", &t);
    for(int i=1; i <= t; i++){
    	printf("#%d ", i);
        scanf("%d", &n);
        a=0; b=0; c=0; d=0; e=0;
        while(n%2==0){
        	a++;
            n = n/2;
            }
        while(n%3==0){
        	b++;
            n = n/3;
            }
        while(n%5==0){
        	c++;
            n = n/5;
            }
        while(n%7==0){
        	d++;
            n = n/7;
            }
        while(n%11==0){
        	e++;
            n = n/11;
            }
            
        printf("%d %d %d %d %d\n", a, b, c, d, e);
        }//end of test cases
}//end of main
