#include <stdio.h>
int	main(void){
		
long long int   system_conv(  int system ,int base	);
		

					
	printf("%ld",   system_conv(  33333333333 , 8	)     );
		return 0;
	}
/*получть степень) сдвинуть число ) получть число   		*/



long long int   system_conv(  int system ,int base	) {
long long	int  middle = 1, end = 0;
		while ( system){
			end +=  system		 % 10  * middle;
			system	 /= 10;
			middle *= base;				
			}
			return end; 		
				}
