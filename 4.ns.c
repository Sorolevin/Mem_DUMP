#include<stdio.h>
	main(void){
        int in;
        double pay = 0;
		int  managers = 0, hWorkers = 0, cWorkers = 0, salary = 0, sdel = 0 ;
		double manage = 0 ;
		double work_hours, hours ,up_hours , up_cash;
		double work_comision = 0  , csalary = 0;
		double work_sdel = 0, work_made= 0, res = 0  ;
		while((in = getchar()) != EOF  ){

				switch(in){
				case '1':
                    printf("inter managers payd");
                    scanf(" %lf", &manage);
                    printf("paid to week %.2f\n", manage);
                    managers++;
				break;



				case'2':
                printf("inter worker hours payd\n");
                    scanf("%lf", &work_hours);
                printf("inter  hours ");
                    scanf("%lf", &hours);

                if(hours > 40){
					up_hours = hours - 40;
					up_cash = work_hours * 1.5 * up_hours + work_hours * 40;
					printf("%.1f  %.2f",up_hours, up_cash);
						}
						else{
							pay = work_hours*hours;
							printf(" %.2f ",pay );
								}
								hWorkers++;
								break;


				 case'3':
				 printf("inter commision worked salary" );
				 scanf("%lf", &csalary);
				 pay = 250.0 + 0.057 * csalary;
 				 printf("$ %.2f\n", pay);
				cWorkers++;
				 break;

				case '4':
				printf("how much sdel");
					scanf("%lf", &work_sdel);
				printf("how made sdel");
					scanf(" %lf", &work_made);

				printf("%lf" , work_sdel * work_made  );
				 res++;
				 break;


				case'\n':
                case'\t':
                case' ':
                break;


                default:
                printf("%s", "Incorrect letter grade entered");
                puts("Enter a new grade");
                break;

		}


				}

		printf("\n%d\n%d\n%d " , managers, hWorkers, cWorkers);

		return 0;
	}
