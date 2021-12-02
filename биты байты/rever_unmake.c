#include<stdio.h>
	
	int main(void){
		 unsigned int		p = 1234567 , k = 0 ;
		unsigned rev(unsigned x) ;
		void displayBitsReversed( unsigned value );
		
		
				
		void displayBits( unsigned value );

		  
	               rev( p );
							
	
		
		
		return 0;
	}

unsigned rev(unsigned x) {
	
	void displayBits( unsigned value );
puts("1");
   displayBits(  (x & 0x55555555) << 1    )  ,    displayBits( (x >> 1) & 0x55555555  )   ;
		x = (x & 0x55555555) << 1 | (x >> 1) & 0x55555555;
        
   
   
   puts("2");
   displayBits(  (x & 0x33333333) << 2    )  ,    displayBits( (x >> 2) & 0x33333333  )   ;
		x = (x & 0x33333333) << 2 | (x >> 2) & 0x33333333;
   
  puts("3"); 
   displayBits(  (x & 0x0F0F0F0F) << 4   )  ,    displayBits( (x >> 4) & 0x0F0F0F0F )  ;
		x = (x & 0x0F0F0F0F) << 4 | (x >> 4) & 0x0F0F0F0F;
puts("4");	
	displayBits(    (x << 24) | ((x & 0xFF00) << 8)      )  ,    displayBits( ((x >> 8) & 0xFF00) | (x >> 24 ) )  ;
		x = (x << 24) | ((x & 0xFF00) << 8) |  ((x >> 8) & 0xFF00) | (x >> 24);








return x;
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
