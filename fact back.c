#include<stdio.h>
        long factorial(unsigned int );
        void printRecursing(int n);
		int main(){
        unsigned int i;

					 

            for(i = 0; i <= 10; ){
                printf("%2d! = %ld\n", i, factorial(i++));
            }
            return 0;
        }

    long factorial(unsigned int number){
      
				if(number <=  1){
					return 1;
            }

    else {
     printRecursing(number);
	 return   (  number  * factorial(number - 1)) ;
            
        }
    }
    	
    	void printRecursing(int n){
    		printf("number = %*d\n" , n ,n   );
		}
