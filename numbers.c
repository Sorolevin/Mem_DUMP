#include<stdio.h>
	main(void){

		int count = 0 , x = 0;

			while(count <= 3000000){
		count++;
			if(count  % 1000000  == 0)
              printf( "%d", count /1000000  );
                x++;
			}











		return 0;
	}
