#include<stdio.h>
#include<string.h>

	int main(void){
		
		int m = 0 ;
		char *srhPTR;
		char string[100];	
		char buf [10];			
			printf("enter string and search over space:");
			scanf("%s %s",  string  ,  buf);
			
			
			if(strstr(string,buf)){
			
			
			srhPTR = 	strstr(string,buf) ;
			
			}
					
		while(srhPTR){
		
		if(strstr(srhPTR,buf) ){
				++m;
		
			srhPTR = 	strstr(	srhPTR + 1  ,buf) ;
		
		}	
	
		printf("%d %s",m  , buf    );
	}		
					
					return 0;
	}
