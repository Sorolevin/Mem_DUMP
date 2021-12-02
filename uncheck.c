#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int Noll[200] = { 0};
	int full[200] = { 0};
	int intro[200] = {0};
	int mx = 0;
	int xm = 0,p;
	srand(time(NULL));
	for( mx = 1; mx <= 200; mx++) {
		if(   	++full[ Noll[mx] = 1 + (rand() % 200)]     == 1) {
			intro[++xm] = Noll[mx];
		}
	}
	for( mx = 1; intro[mx] != 0; ++mx ) {
		printf("\n%.2d   = %.2d ", mx ,intro[mx ]   );
	}
	return 0;
}
