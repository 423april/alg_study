#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  int n, res;
  scanf("%d", &n);
  res = n;
  for(int i=0; i <= n; i++){
    printf("%d ", res);
    res--;
  }
}
