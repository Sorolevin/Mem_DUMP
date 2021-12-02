#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX  20
int part(int mas[], int p , int r );



int view (int mas[]) {
	int d;
	for(d = 0; d != MAX; d++) {
		printf("%2d," , mas[d] );
	}
	if(0 == (d % 10) ) {
		puts(" ");
	}
}

int  rt[MAX] = {33,45,38,42,40,47,32,41,43,37,34,36,46,48,51,49,52,50,39};;
int main(void) {

	int d;
	int qs(int mas[],int p , int r );
	int view (int mas[]);
	srand(time(NULL));









	qs( rt, 0, MAX  - 1 );


view(rt);

	return 0;
}


int qs(int mas[],int p , int r ) {
	int q;
	if (p    < r  ) {
		q = part(mas, p  , r );
		qs(mas, p , q - 1 );
		qs(mas, q + 1 , r) ;
	}
}

int part(int mas[],int p , int r ) {
	int view (int mas[]);
	void swap ( int *x , int *y ) ;
	int x = mas[r];
	int	i = p - 1, j = 0;
	j = p;
	
	
	
	while( j <  MAX   ) {
		if(mas[j] < x   ) {
			++i;
			swap( &mas[i ], &mas[j]);
		}
		j++;
	}
	swap( &mas[i + 1], &mas[r]);
	
	
	
	return i + 1;
}

void swap ( int *x , int *y ) {
	int buf;
	buf = *x;
	*x = *y;
	*y = buf;
}
