#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define STRING  250
#define ROW 350
#define CHECK 65

int main(void){
	int str =0, row = 0;
	
	char line[STRING][ROW] = {{0}};
	
	
	printf("%s", "PLease Enter:");
	
	fgets( line,ROW - 1, stdin);
	
	while( atoi(line[str++]) != EOF   ){
		printf("%s", "PLease Enter:");
		fgets(line[str],STRING, stdin);
	}
	
		line[str - 1][0] = '\0';
	


	for(str= 0  ;  strlen(line[str]) ; str++  ){	
		printf("%10c", ' '); 
	
		for(row = 1;     row <=  strlen(line[str]) ; row++){
				
			printf( "%c", line[str][ row - 1]  );
		
			
			if ( !( row	% 	CHECK ) 	){
				printf("\n%10c", ' ');
			}
	
	
	}
}




	return 0;
}


