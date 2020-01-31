#include <stdio.h>
#include <math.h>

int main(){
	int T;
	int num;
	int y, m, d;
	
	scanf("%d", &T);
	
	for(int i=1; i <= T; i++){
		printf("#%d ", i);
		scanf("%d", &num);
		y = num/10000;
		num = num - y*10000;
		m = num/100;
		d = num - m*100;
        
        
		switch(m){
			case 2:
				if(d < 1 || d > 28){
					printf("%d\n", -1);
					continue;
				}
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(d < 1 || d > 31){
					printf("%d\n", -1);
					continue;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d < 1 || d > 30){
					printf("%d\n", -1);
					continue;
				}
				break;
			default:
				if(m < 1 || m >12){
					printf("%d\n", -1);
					continue;
				}
				break;
		}
		//how to print with zero padding
		printf("%04d/%02d/%02d\n", y, m, d);
	}
}//end main
