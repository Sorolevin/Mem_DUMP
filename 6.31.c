#include<stdio.h>
#define MAX 15
void bucket_sort(int un_sort[] ) {
	long	int index  = 0 ,pop = 0, vs = 0,n = 0,op = 0 , m = 0, l  = 0 ;
	long	int fix[10][MAX];
	int os = 1 ;

	for( index = 0 , vs = 0; index < MAX; index++ ) {
		if(vs < un_sort[index]) {
			vs = un_sort[index];
		}
	}

	while((  vs / os ) > 0 ) {
		for(m = 0; m < 10; m++   ) {
			for(l = 0; l < MAX; l++   ) {
				fix[m][l] = 0;
			}
		}

		for(pop = 0 ; pop <  MAX   ; pop++) {
			n = (un_sort[pop] / os  )  % 10;
			fix[n][ pop ] = un_sort[pop];
		}

		for(index = 0, op = 0; index < 10 ;	index++ ) {
			for(pop = 0 ; pop < MAX  ; pop++) {
				if(fix[index][pop]  !=  0     ) {
					un_sort[op]	 =	fix[index][pop]    ;
					++op;
				}
			}
		}
		os *= 10;
	}
}
int main() {
	int unsort[MAX] = {439,834,75,64,535,4,3,2,1,9,42,15,23521,56,21 };
	int v;
	void bucket_sort(int un_sort[] );
	bucket_sort(unsort );

	for( v = 0; v < MAX ; v++ ) {
		printf ( "%d  \n", unsort[v] ) ;
	}
	return 0;
}
