#include<stdio.h>
	main(void){
		#define SIZE 10
	float a[SIZE] = {31.3, 42.3, 42.2, 52.5, 24.4, 35.3, 33.4, 42.4, 42.44, 41.53};		
	float b[SIZE]  ;
int	d;
int x;			
int l;				
				for(l = 0 ,d = 0,x = 9 ; x >= 0  || l <=  SIZE - 1 ; d++, x--, l++ ) {
						b[d] = a[x];
					
						printf("%.1f %.1f\n", a[l], b[l]) ;
					}
			return 0;	
		}
