#include <stdio.h>

#define PM 2

int main(void) {    
    
  register int   k = 0;
  
  register int   system = 33333333;
  
  register int   end = 0;
   
    
    
    
   do{
    	
		end += system  % PM  *   (  (PM << k++  ) / PM )  ;
		     	
	
	}  while(system *= 8 );
    	
    
   
     printf("%d\n", end );
    /*
	int x  = 1011;
    
      printf("%d\n  "   , x - ((x >> 1) & 0x55555555) );
    */
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
