#include<stdio.h>
	main(void){
		#define SIZE 10
	float a[SIZE] = {31.3, 42.3, 42.2, 52.5, 24.4, 35.3, 33.4, 42.4, 42.44, 41.53};		
	float b[SIZE] ;

int x;			
			
				for(x = 0 ; x <= 9; ++x){
						b[x] = a[x];
					}
				
				for(x = 0; x <=  SIZE - 1; x++)	 {
					printf("%.1f %.1f\n", a[x], b[x]) ;
			
				}
		 return 0;
	}
