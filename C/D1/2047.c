#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	
	scanf("%s", &str);
	
	for(int i = 0; i < strlen(str); i++){
		if(i !=0 && ((int)str[i] >= 97) && ((int)str[i] <= 122)) printf("%c", (int)str[i] - 32);
		else printf("%c", str[i]);
	}
	
}//end main
