#include<stdio.h>
#include<math.h>
int	loop ;
double y, x,d = 1;
int t,e;

	main(){
	scanf("%d", &t);
	

		
		
		
		scanf("%lf", &y);	
		for(loop = 1 ;loop <= 4; ++loop  ){

		if(loop == 1){
		x = floor(y  + .5);
		printf("%f %f\n",  y, x	);
		 d *= 10;
		 continue ;
		}	
		else
		x = floor(y * d + .5)/ d;
		printf("%f %f\n",  y, x	);
		
		d *= 10;
		}

		return 0;
	}
