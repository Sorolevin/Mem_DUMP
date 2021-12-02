#include<stdio.h>
	
	int main(void){
		 unsigned int		p = 0x12345678 , k = 0 ;
		unsigned rev(unsigned 	 input) ;
		void displayBitsReversed( unsigned value );
		
		
				
		void displayBits( unsigned value );

		  
	                   int m =   rev( p );
							
printf("%d" , m );
		
		
		return 0;
	}

unsigned rev(unsigned 	 input ) {
		
		void displayBits( unsigned value );;		


		
		
		
	 displayBits(  	 input );	
		
		
		
	 displayBits(  	 input = (input & 0x55555555) <<  1 | (input & 0xAAAAAAAA) >>  1 );
	    
					 input = (input & 0x33333333) <<  2 | (input & 0xCCCCCCCC) >>  2;
				     input = (input & 0x0F0F0F0F) <<  4 | (input & 0xF0F0F0F0) >>  4;
				     input = (input & 0x00FF00FF) <<  8 | (input & 0xFF00FF00) >>  8;
				     input = (input & 0x0000FFFF) << 16 | (input & 0xFFFF0000) >> 16;
	      

	 	
	 displayBits(  	 input );	

		


return 	 input;
}










	




void displayBitsReversed( unsigned value )
{
    unsigned c, displayMask = 1;
    
    for( c=1; c<=32; c++ )
    {
        putchar( value & displayMask ? '1' : '0' );
        value >>= 1;
        
        if(c % 4 == 0)
            putchar( ' ' );
    }
    
    putchar( '\n' );
}







void displayBits( unsigned value )
{
    unsigned c, displayMask = 1<<31;
    
    for( c=1; c<=32; c++ )
    {
        putchar( value & displayMask ? '1' : '0' );
        value <<= 1;
        
        if(c % 4 == 0)
            putchar( ' ' );
    }
    
    printf("\n\n");
}
