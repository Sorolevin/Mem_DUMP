#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ROW 200
#define  COL 150
int main (void) {
	char var[ROW][COL] ,*buf,   *sl   ; 
	int x = 0 , p  = 0 , slice  , one  = 1 , zero = 0   ;
	while(atoi(  var[x++]   ) != -1 ){
	    printf("Please Enter:");
		fgets(var[x],sizeof(var),stdin );
	} 	 
	while( !isalpha((int) sl)   ){
		printf("enter search  :");
		scanf("%s",(char *)   &sl);
			if( ! isalpha((int) sl)  ){
			puts("error!!");
		}
	}
	var[x  - one ][zero] =  '\0'; 
	slice =   strlen ((char *)  &sl) ;
	for(x = one;**(var + x);x++){
	buf   = strtok(  var[x]," ");
	while(buf){
		p = strlen(buf);
		if(!buf[p + one]){
			p = strlen(buf) - one ;
		}
		if(!strncmp(&buf[p - slice],(char *) &sl,slice)){
		    printf("%d %s\n", strlen(buf),buf);	
		} 
			buf  = strtok(NULL," ");
	}	
}
return 0;
}
