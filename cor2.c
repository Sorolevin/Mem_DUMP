#include<stdio.h>
#include<math.h>
float cor(float y1,float y2, float z1 , float z2 );

	float main(void){
		float b1,b2,a1,a2;
				printf("enter digits:");
				scanf("%f %f %f %f", &b1, &b2, &a1, &a2 );
					printf("%f", cor(b1, b2, a1, a2	 ));


		return 0;
	}
	float cor(float y1,float y2, float z1 , float z2 ){

	return	sqrt(  pow(y2 - y1,2) + pow(z2 - z1,2)  	);
	}

