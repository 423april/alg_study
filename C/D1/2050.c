#include <stdio.h>
#include <string.h>

int main(){
	char str[201];
	
	scanf("%s", &str);
	
	for(int i = 0; i < strlen(str); i++){
		printf("%d ", (int)str[i] - 64);
	}
	
}//end main
