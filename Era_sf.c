#include<stdio.h>
#define MAX 100
int main() {
	int	full[MAX] = {0} , p = 2, po = 0,re ,er = 2 ;
	
	for(p = 1; p <= MAX ;  ) {
		if(p % 2 == 1   ) {
			full[++po] = p   ;
		}
		++p;
	}
	
	while( full[er]   ) {
		for ( 	re = er  ; full[re] != 0 ; re++  ) {
			if(	full[re]  % er  == 0    ) {
				full[re] = 1;
			}
		}
		er++;
	}
	for(  p = 1 , po = 2; full[p]  ; ++p  ) {
		if(full[p] != 1 ) {
			printf(" \n%d  ",	  full[p]    );
			po++;
		}
	}
	return 0;
}
