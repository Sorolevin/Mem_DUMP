#include <stdio.h>
	main(void){
	float  debit = 0, credit = 0 , all_sum = 0, max_credit = 0 ,result  = 0;
    int number = 0;

		printf("inter -1 if end");
			scanf("%d",&number);
				while(number !=  -1){



					printf("inter debit");
						scanf("%f", &debit);

					printf("inter credit");
						scanf("%f", &credit);

					printf("inter all_sum");
						scanf("%f", &all_sum);

					printf("inter max_credit");
						scanf("%f", &max_credit);

					result = ( debit + credit) - all_sum;

					if(result > max_credit){

					printf("limit_break\n");
						printf("number %d\n",	number
						
						
						);

				
							}

							else{
					printf("inter -1 if end");
					scanf("%d",&number);
							}

				printf("inter -1 if end");
				scanf("%d",&number);
				}
		return 0;
	}
