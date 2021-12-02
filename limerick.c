#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 8 
#define ROW 6
#define LINE 6
int main(void) {

	
	void find_rythm(char  *in, char *buf[] ,  char   *vr[]  , int num ) , deck_end ( char *buf[], const char  array[] , int lnstr    );
	
	char *article[] = { "the", "a", "one", "some", "any", "that" , "each" ,"no"     };
    
	char *noun[MAX] = { "boy", "stray", "dog", "town", "bayog" , "dawn"  ,"day" ,"troy"  };
    
	char *verb[MAX] = { "drove", "ran", "walked", "skipped" ,  "looking" ,   "found" ,  "seen"  , "borned" };
    
	char *preposition[MAX] = { "to", "from", "over", "under", "on"  ,"by" ,  "in" , "up"    };
	
	int choice [] = {1,0,1,0,0} , rt = 0, lk = 0, lm = 0,  pls = 0,serials[] = {0,1,2,3,0,1}, m = 0 ,chc[] = {0,1,0,} , lms = 0 ,kl , cms = 0 ;
	
	char word  [80] = "\0", **ar[] = {article,noun,verb,preposition}  ,*serials_2[2] = {};	 								   
	srand(time(NULL));
for(m = 0;  m !=  20; m++   ){
	
	for(pls = 0; pls !=  ROW - 1; ++pls,*word =  '\0'  ){
		for(rt = 0; rt != LINE; ++rt   ){
		lk  = 	serials[rt];
		lm  = rand() % MAX ;
	strcat(  word , ar[lk][lm] ) ;
	if(  rt ==  LINE - 1 ){
		if(choice[pls]  ){
			deck_end (&serials_2[cms],  word, 2 );
			cms++;
	} 
	else{
	kl =	chc[lms]; 
		find_rythm(  word  ,noun ,  &serials_2[kl ]  , MAX  );	
		lms++;
		}  
	}
	if(rt != LINE - 1 ){
			strcat(  word ," " );
		}
    else	  if(rt == LINE - 1  ){
	  	strcat(  word , ".\n"    );
		*word =	toupper(*word);
	}
}
printf("%s"  , word);
}

cms = 0 , lms = 0 ,memset(serials_2, '\0' , 5 );

puts(" ");
}
return 0;
}

void deck_end ( char *buf[], const char  array[] , int lnstr    ){
	int   upper = 0, backcount   = strlen(array) ;
		for( ; lnstr <= backcount ;	upper++){
			if( lnstr >= backcount){
			strcat((char *) buf,  &array[upper ]   );
		}
backcount-- ;
	}
}

void find_rythm(char  *in,  char *buf[] ,    char   *vr[] , int numb  ){
		int   	randem , unfind = 1;
		while (unfind){
 
       	randem  = rand() % numb ;
		    if( strstr(buf[randem], (char *)vr)   ){
				strcat(  in ," " );
				strcat( in, buf[randem] );
				unfind = 0;
		}
	}
}
