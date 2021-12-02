#include<stdio.h>
float	cels(float y);
float fahr(float x );
	
int	main(void){
	
	int i = 0;	
	int k = 32;		
			for(i; i <= 100 && k <= 232; i+= 10, k+= 10){
			printf("cels = %6.2f = %d	fahr = %6.2f = %d\n", cels(i),i,fahr(k),k);
			}
	
		return 0;
	}
		
float	cels(float y){
	return   5.0 *   (y - 32)	/ 9;
		}

float	fahr(float x){
		return   1.8 * x + 32;
	}
