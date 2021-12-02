#include<stdio.h>
#include<string.h>

	int main(void){
		
		int m = 0 ;
		char *srhPTR = "0";
		char string[100];	
		char buf[10];			
			printf("enter string and search over space:");
			scanf("%s %s",  string  ,  buf);
			
			
			if(strstr(string,buf)){
			printf("this new string %s\n", strstr(string,buf)   );
			srhPTR = 	strstr(string,buf) ;
			}else{
				puts("buy");
			}
					
					
		while(srhPTR){
		printf("enter search string:");
		scanf("%s" , buf);	
		
		if(strstr(srhPTR,buf) ){
			printf("this new string %s\n", strstr(	srhPTR, buf )   );
			srhPTR = 	strstr(	srhPTR + 1 ,buf) ;
		}	
			else	{
				puts("None string");
				break;
			}
				
			}		
					return 0;
	}
