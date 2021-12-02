#include<stdio.h>
#define SIZE 20
long	int main(void) {
	long	int a[ SIZE ] = {33,45,38,42,40,47,32,41,43,37,34,36,46,48,51,49,52,50,39};

	long		int i = 0;
	long		int hold ;
	long	int zero = 0, one = 0 , two = 0 , tree = 0 , four = 0 , five = 0,   six = 0,  seven = 0, eght = 0, nine = 0;
	puts(" Data items in original order");
	for(i = 0; i < SIZE; i++)	{
		printf("%3ld",	a[i]  );
	}
	puts(" ");
	while(!  ( a[0] == zero && a[1] == one && a[2] ==  two && a[3] == tree && a[4 ]  == four   && a[5 ]  == five && a[6 ]  == six  && a[7 ]  == seven   &&   a[8 ]  == eght &&  a[9 ]  == nine   ) ) {



		zero = a[0];
		one  = a[1];
		two  = a[2];
		tree = a[3];
		four = a[4];
		five = a[5];
		six  = a[6];
		seven= a[7];
		eght = a[8];
		nine = a[9];



		puts(" ");
		for(i = 1;  i <=  SIZE - 1 ; i++ 	) {
			if( a[ i ] > a[ i + 1 ]    ) {
				hold = a[ i ];
				a[ i ] = a[ i + 1 ];
				a[ i + 1]  = hold;
			}
			if( a[ i ] < a[ i - 1 ] ) {
				hold = a[ i ];
				a[ i ] = a[ i - 1 ];
				a[ i - 1]  = hold;
			}
		}

		if(a[0] == zero && a[1] == one && a[2] ==  two && a[3] == tree && a[4 ]  == four   && a[5 ]  == five && a[6 ]  == six  && a[7 ]  == seven
		        && a[8 ]  == eght && a[9 ]  == nine    ) {
			break;
		}
		for(i = 0; i < SIZE ; ++i)	{
			printf("%4ld",	a[i ] );
		}
	}
	puts(" ");
	return 0;
}
