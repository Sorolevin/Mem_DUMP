#include<stdio.h>
#include<math.h>
double 	  calc (  double);

	double	Hours, HourSummary, CashSummary ;
	int i = 1;	
	
    int	main(){
			
		scanf("lf%", &Hours );	
			
			while( i <= 3 ){
			
						
	HourSummary += Hours;	
		CashSummary += calc(Hours);
		
		printf("%.2f \t%.2f", Hours ,	 calc(Hours)	);
		
	 i++;
	scanf("lf%", &Hours );	
	}
		
	
		
		
		printf("%.2f  %.2f", HourSummary ,	CashSummary 	);
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
