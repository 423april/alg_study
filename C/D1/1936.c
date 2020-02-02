#include <stdio.h>
#include <math.h>

int main(){
  int a,b;
  scanf("%d %d", &a, &b);
	
  if(fabs(a-b) == 1 && a<b) printf("B\n");
  else if(fabs(a-b)==1 && a>b) printf("A\n");
  else if(a>b) printf("B");
  else printf("A");
}
