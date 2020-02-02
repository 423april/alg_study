#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  int n;
  int result = 1;
  scanf("%d", &n);

  printf("%d ", 1);
  for(int i = 1; i <= n; i++){
    result = result * 2;
    printf("%d ", result);
  }
}
