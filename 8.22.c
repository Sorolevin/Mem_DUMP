#include<stdio.h>

void main(void){
		for ( int x = 0;  x <= 256;x++ ){
				printf(  0 == (x % 10) ?   "\n"  :   " %.3d = %c " ,x  , x );
			}
}
