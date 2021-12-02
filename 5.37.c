#include<stdio.h>
	
		
int	main(void){
	 int	power(int y, int z);	
		int b = 2 , n = 5;
					
					printf("%d",	power(b,n));
	return 0;
	}
	
 int	power(int y, int z){
			if(z > 1	){
		
		return	y * power(y,z - 1 	) ;
			
			}	
		else if (y == 1	)	{
				
		return  power(y,z);
				}
		}
