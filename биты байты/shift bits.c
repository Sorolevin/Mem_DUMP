#include<stdio.h>

void display(unsigned value );


	int main(void){
	
	unsigned x = 127;
	unsigned k = 167;
			display(  x);	
		puts(" ");
			
			
			display( k);	
	
		puts(" ");
	  display(~ k);
	
		return 0;
	}
	
	
	
	void display(unsigned value ){
	printf("value =  %u\n", value  );	
		
	unsigned c ;
	unsigned	displaymask = 1;
	 
	 displaymask  <<= 31;
       
       
       
       
       

	
		
	     for(c = 1;c <= 32; c++ ){
	     		 
				  
				 printf ("%c",  value & displaymask ?  '1' : '0' , value, displaymask  );
			 
		
	     	
	     	value <<= 1;
	    
	     	if(c % 8 == 0){
	     		putchar (' ');
			 }
	     	
	     	
	     	
	     	 
		 }	
		
		
		
		
		
		
		
		
		
		
		putchar('\n');
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
