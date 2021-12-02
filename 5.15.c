#include<stdio.h>
#include<math.h>
		
		double	hyp(double ,   double);
		double a , b;	
			int main(){
				printf("%s", "Inter digits");
					scanf("%lf %lf",	&a,&b);
				printf("hypotinuse 	%.1f",	hyp( a,b)	);
				return 0;
			}
					
			double	hyp(double x, double  y){
					
					return sqrt(pow(x, 2)+ pow(y, 2)			);
				
					}
				
