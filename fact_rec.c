#include<stdio.h>
  
        
		int main(){
        double i = 0;

      double factorial(double number );

            for(i = 0; i != 22; i++ ){
                printf("%2lf = %lf\n", i, factorial(i));
            }
         
		 
		 
		    return 0;
        }

    
	
	
	
	
	
	
	
	
	double factorial( double number){
      
				if(number <=  1){
					return 1;
            }

    else {
     return   ( number * factorial(number - 1) ) ;
            
        }
    }
