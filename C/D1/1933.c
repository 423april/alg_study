#import <stdio.h>
#import <math.h>
#import <string.h>

int main(){
  int n;
  scanf("%d", &n);

  for(int i =1; i <= n; i++){
    if(n%i == 0) printf("%d ", i);
  }
}
