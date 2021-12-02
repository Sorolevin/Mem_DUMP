#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(void){
	
	char s[100] = {" "};

	char  *tokenptr;
	   gets(s);
	   
	   tokenptr = strtok(s," " );
	   
	   
	   
	   
	   while(tokenptr != NULL  ){
	   	printf("%c%s ", toupper(tokenptr[0]) , &tokenptr[1]);
	   	 tokenptr = strtok(NULL," " );
	   }
	   

	

	
	
return 0;
}
