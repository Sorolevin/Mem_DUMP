#include <stdio.h>

 
int main(void)
{
int slow_bits_in_byte( unsigned int byte) ;

int  l  =   0xff;
unsigned	int p = 0;
		
  		for(p ;p <= l   ;p++  ){
		
		  printf("%d = %d\n", slow_bits_in_byte(p) , p  );
		     
		  }
 
      
    return 0;
}
int slow_bits_in_byte(unsigned int byte) {
int a, mask, sum;
for (a = 0, mask = 1, sum = 0; a < 8; a++, mask <<= 1)
if (byte & mask) sum++; return sum;
}
