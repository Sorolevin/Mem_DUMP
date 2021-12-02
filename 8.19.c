#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ALPHA 26
	void main(void){
		int x ,m ,count[ALPHA] = {0};
		char *srhPTR, *srtPTR ,
		string[80] = " " ,
		buf[ALPHA]  = {'a','b','c','d',
					   'e','f','g','h', 
					   'i','j','k','l',  
					   'm','n','o','p',
					   'q','r','s','t',  
					   'u','v','w','x','y','z'} ;			
	
	
		printf("please enter counting symbols:");
		fgets(string,sizeof(string), stdin);	
	
	
	for(x = 0;x != ALPHA; x++){
		srhPTR 	= strchr(string  , buf[x]   )   ;
		
		 while(srhPTR  ){		
			srhPTR   = strchr(srhPTR + 1, buf[x] ) ;
			++count[x] ; 
			}
		}
	
	for(x = 0;x != ALPHA; x++){
			srhPTR 	= strchr(string  , toupper((int) buf[x] ) )   ;
			while(  srhPTR ){		
				srhPTR   = strchr(srhPTR + 1,toupper((int) buf[x] ) ) ;
				++count[x] ; 
			}
	}
for(x = 0; x != ALPHA;x++ ){
 
  printf("this alpha %c  ==  number of alpha %d " , buf[x] , count[x] );	
  	for(m = 0; m != count[x];m++){
  	printf("*");
 
  }
 puts(" ");
 }
}
