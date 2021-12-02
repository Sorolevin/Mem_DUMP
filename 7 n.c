#include<stdio.h>
main(void){
    int p = 0, z = 0 ;
            scanf("%d", &p);
				
				while(p){
					if(p % 10 == 7)
						z++;
						p /= 10;
				}
	
	printf("%d", z);
	return 0;
	}