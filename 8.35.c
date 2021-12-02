#include<stdio.h>
#include<string.h>

int main (void){
	char  list[10000] ;
	char lin;
	char str ;
	int x = 1 ; int y  = 0;
	int m = 0;
	list[0] = ' ';
   	printf("enter ");
   
   while  ((   list[  x++ ]  =  getchar() ) != EOF &&   x <  10000          ){
   		 if(list[x - 1] == '\n'){
   			printf("enter ");
		   }
   		}
	
			
			
		list[x - 1 ] = '\0' ;
	
	
	
	
	for(m = 0 , x = 0 ; ( *list)++ !=  '\0' ;  m++ , x++   ){
		 !(x % 65   )  || list[m] == '\n' ?  printf( "\n%10c", ' ') , x = 0   : printf("%c" , list[m ]   );
	}
		return 0;
}

