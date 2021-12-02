#include  <stdio.h>
	
	int main(void){
	int	u = 33 ;
	int	y = 78;
	int	buf = 0; 
	int d = 0;	
		
		
		while(  buf =  ( y % u  )   ){
			printf("%d %d\n"  , buf , d++   );
			
	
		y = u;
		u = buf;
		
		}
		
		puts("PRIVET");
		
		gcd(y, u );
		
		
		
		return 0;
	}
	
	
   int  gcd (int a,int b) {
    int k = 0;
	a = abs(a);
    b = abs(b);
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    
		printf("%d %d\n"  , a , k++   );
	}
    return a;
}
