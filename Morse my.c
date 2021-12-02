#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main(void){
	
		int prov( char *buf, char *sumb[][37]  );
		int k = 1;
	char word;	
		
	char *symbols[2][37] = { 

  
  {".-","-.." ,"-.-." ,"-.." , "." ,"..-.","--.,","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.", "..." ,"-","..-","...-",".--","-..-","-.--","--.." ,".----","..---", "...--" ,"....-" ,"....." ,"-...." ,"--...","---..","----.","-----"     },
	{"A","B" ,"C" ,"D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R", "S" ,"T","U","V","W","X","Y","Z" ,"1","2", "3" ,"4" ,"5" ,"6" ,"7","8","9","0"     }
	 };
	
		int m = 0;
		char l[50];
		char *buf;

			printf("%s", "please enter morse code: " ); 
			gets( l );
	
	while(!prov(l, symbols)){
			printf("%s", "please enter morse code: " ); 
			gets( l );
		} 

	
		
		
		buf = strtok( l, " ");
		
		while(buf != NULL){
		 for(m = 0; 1 ;  m++){
			if(!strcmp( buf ,symbols[0][m]  )) {
				printf("%s", symbols[1][m]  );
				break;
				}
			}
			buf = strtok(NULL, " ");
		}
		
		free(l);
	

	
	
		puts(" ");
	
	
	
		
		
	printf("%s", "please enter Alphabets: "); 
		
		for( m = 0 ; ( word = getchar() ) != '\n';  ){
		
		if( isalnum(word) || word == ' ' ){
			l[m++] =    toupper(word) ;
			l[m++] = ' ';
		}
		else{
			k = 0;
			puts("erorr");
			break;
		}
	}
	
	l[m] = '\0';
	
	if(k){

	buf = strtok( l, " " );
	while(buf != NULL){
		 for(m = 0; 1 ;  m++){
			if(!strcmp( buf ,symbols[1][m]  )) {
				printf("%s ", symbols[0][m]  );
				break;
				}
			}
			buf = strtok(NULL, " ");
		}
	} 
	
	
	
	
	
	return 0;
	}
	
	int prov( char *buf, char *sumb[][37]  ){
	int	x = 0;
	char cp[50];
	strcpy(cp ,buf  );
	
	
	char *bf;	
	
	for (bf = strtok(cp, " ")  ; bf ;   bf = strtok(NULL, " ") ){
		for ( x = 0 ;   x < 37 ; x++ )  {
			if( x  > 35 ){
				puts("- - - - - - - - - - - - - - - - - " );	
				puts("WARNING !!! WARNING !!! WARNING !!! " );	
				puts("- - - - - - - - - - - - - - - - - " );
			return 0;
			} 
			if(!strcmp( bf , sumb[0][x] )){
				 break;
			}
		}  
	}
	return 1;	
	}
