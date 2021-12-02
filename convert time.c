#include<stdio.h>
#include<string.h>

int main(void){
	void conv_to_hours(int min );


	int p = 0 ;
	
	while(1){
		printf("please enter minutes end -1: ");
		
		while(scanf("%d", &p ) != 1  ){
		getchar();
		break;
		}
		
		if(p == -1){
			break;
		}
		conv_to_hours(p);
	}
		
		
		return 0;
}

void conv_to_hours(int min ){
	printf("%2.d:%.2d\n",(min / 60) ,( min % 60) );
	} 
