#include<stdio.h>
#include<string.h>

int main(void){
	
	char ext[] = "*********" ;
	int x = 0, g = 1;
	char ptr[8]   ;
	int ln = 0 ;
	
	printf("%s", "please enter check: ");
	scanf("%s", ptr ); 
	
	   ln =  ( 8 - strlen(ptr));
	
	while(ptr[x] != '\0'){
		if( !isdigit(   ptr[x]) &&   (  ptr[x]  != '.'  && ptr[x]	!= ',') ){
			g = 0;
			break;
			} 
		x++;		
		}
		
	if(g){
		strcpy ( &ext[ ln] , ptr );
		puts(ext);
		}	 	
	else{
		puts("error");
	}
	
	return 0;
}
