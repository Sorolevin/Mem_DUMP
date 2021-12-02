#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ROW 30
#define  COL 20
void main (void) {
	char *buf , var[ROW][COL]  ; 
	int x = 0;
		
	while(   atoi(  var[x++]   ) != -1  ){
		printf("Please Enter:");	
		fgets(var[x],sizeof(var),stdin );
	}
	
	
	var[x  - 1][0] =  '\0'; 
	
	for(x =0 ;   x != ROW;   ){
		
		buf =strtok(  var[x++]," ");
	
	while(buf != NULL){
		
		if( *buf == 'b' ){
					printf("%s\n", buf);
			}
		buf =  strtok(NULL," ");
		
		}
	} 		
}
