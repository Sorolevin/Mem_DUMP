#include<stdio.h>
#define VAR 20
	int LinearSearch(const  int array[],int key,int size	);	
	main(void){
	int y, x = 0   ,m ;
	int	duple[VAR] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		while( x < VAR  ){
	printf("enter the number in the list:");
			scanf("%d", &y);
				
					if( LinearSearch( duple,y,VAR) 	 ==  -1 && (y >= 10) && (y <= 100 )	){
							duple[x] = y;
							puts("the number is entered into the list");
					}				
					else {			
						puts("ERROR");	
					}			
				puts(" ");		
					x++;	
							
					
					}		
					
		for(x = 0; x < VAR   ;++x ){
			if(duple[x] != 0){
		
			printf("%d ", duple[x]);
	 	}
	 }
		return 0;
	}								
	int LinearSearch( const int array[],int key,int size	){
		int n;
				for(n = 0; n < size; ++n){
					if(array[n] == key){
						return  1;
						}
				}
		return  -1;
	}	
