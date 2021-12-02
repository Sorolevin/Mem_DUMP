#include<stdio.h>
#include<math.h>
double 	  calc (  double);
    double	h, SummaryHours = 0.0,  SummaryCash = 0.0 , CurrentCash = 0.0 ;
	int i = 1;
    int	main(){
		for(i ; i <= 3; i++){
		scanf("%lf", &h);
		CurrentCash =  calc(h);	
		printf("%d  %.2f\n", i, CurrentCash);
}
		
		return 0;
	}
	
	 
	 
 
	 
	 
	double 	calc (  double  number  ){
			double charg ;
	if( number < 3.0)
			charg = 2.0;
	
	else if (number < 19.0  )
			charg =  2.0 +    0.50  *	  ceil (number - 3.0  ) ;
	else
      		charg = 10.0;
	return charg;
	 }
