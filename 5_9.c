#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int	main(void)	{

			unsigned int i;
		    unsigned int seed;
 

									srand(time (NULL) );

					for(i = 1; i <= 100; i++ ){
							printf("%10d",  6 + 4 * rand()%5);

				
					}
		return 0;
	}
