#include <stdio.h>
#include<math.h>
int simple(int y);
int main(void)	{
	long int	  n = 2,d = 1;
	while(++n <= 100	) {
		if(simple(n) != 1		) {
			
			printf("%d		\n",	 n );
	
		}
		
		n++;
	
	
	}
		
	
	return 0;
}


int	simple(int y) {

	
	int k = (int) sqrt(  y) ; 
	
	long int m;
	
	for(m = 2; m <= k  ; ++m) {
		if(  (y % m) == 0 ) {
			return    1;
		}
	}
}




