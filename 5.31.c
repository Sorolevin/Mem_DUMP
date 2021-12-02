#include<stdio.h>
int points(int y);
	
	int main(void){
		int a;
				scanf("%d",	&a);
					printf("%d",	points(a));
			return 0;
		}
		
	int points(int y){
		int p = 0;
		
		if(y < 60	){
			p = 0;
		}
		else if ((y >= 90) && (y <= 100)){
			p = 4;
		}
			else if ((y >= 80) && (y <= 89)) {
			p = 3;
		}
			else if ((y >= 70) && (y <= 79)){
			p = 2;
		}
		
		return p;
	}
