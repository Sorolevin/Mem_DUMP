#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main (void){
	int p = 0;

	while(p++ != 254){
		printf( "%c"	,  p );
	if(0 == p % 10  ){
		puts(" ");
	}
		}
	return 0;
}
