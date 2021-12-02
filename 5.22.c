#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int y;
  int u;
 int m = 5314;
 int i	;	
	int  r ;
  	int d = 1000;			
		
		main(){
		srand(time(NULL));		
		y = flash();
		
		
	while(d  != 0 ){
	    r  =  y / d;
		y %= d;  	
		d /= 10;	
	    printf("%d ",	r);
		
	}
	
	
	
	
	
	
		
	return 0;
}
		
	int	flash(void){
			srand(time(NULL));		
	return	 1 +(rand() % 32767);
			
	}	
		

	
	
		
			
	
