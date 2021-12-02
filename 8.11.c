#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 8
#define   ROW 6
#define  LINE 6
int main(void){



	
	srand(time(NULL));

    char *article[MAX] = { "the", "a", "one", "some", "any", "that" , "each" ,"no"     };
    char *noun[MAX] = { "boy", "girl", "dog", "town", "car" , "stupid"  ,"day" ,"cat"  };
    
	char *verb[MAX] = { "drove", "ran", "walked", "skipped" ,  "looking" ,   "found" ,  "seen"  , "borned" };
    char *preposition[MAX] = { "to", "from", "over", "under", "on"  ,"by" ,  "in" , "up"    };
	
	
	

	int rt = 0, lk = 0, lm = 0;
	int  pls = 0;
	char word  [80] = "\0";  
	char  **ar[] = {article,noun,verb,preposition};
	
	int serials[] = {0,1,2,3,0,1};	 
									   
for(pls = 1; pls !=  ROW; ++pls){
	
for(rt = 0; rt != LINE; ++rt ){
	lk  = 	serials[rt];
	lm  = rand() % MAX ;
	
	strcat(  word , ar[lk][lm]    );
	
	if(rt != ROW - 1 ){
			strcat(  word ," " );
		}
	else  if(rt == ROW - 1  ){
	  	strcat(  word , ".\n"    );
		 word[0] =	toupper( word[0]);
	}
}


printf("string %2d %s",pls  , word);
word[0] =  '\0';  
}



return 0;
}
