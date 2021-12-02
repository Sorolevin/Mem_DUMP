#include<stdio.h>
int	main(void) {

	int  in;
	double admin = 0;
	double work_hours = 0;
	double work_comision = 0;
	while((in = getchar()) != EOF  ) {

		switch(in) {
			case '1':
				admin +=300;
				break;

			case'2':
				work_hours += 40*3*1.5;
				break;

			case'3':
				work_comision += 250+250*5.7/100;
				break;
		}


	}

	printf("%.2f  %.2f   %.2f",admin,	work_hours,	work_comision   );

	return 0;
}
