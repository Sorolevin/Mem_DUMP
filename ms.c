

#include "stdafx.h"

main(void) {
#define   SIZE 10
	int workers[SIZE] = { 0,0,0,0,0,0,0,0,0 };
	int frequency[SIZE] = { 0,0,0,0,0,0,0,0,0 };
	int freq[SIZE] = { 0,0,0,0,0,0,0,0,0 };
	int salary = 200;
	int  m = 0, k = 0, n = 0, x = 0;



	for (k = 1; k <= SIZE - 1; ++k) {
		printf("inter summary cash = ");
		scanf("\n%d", &m);
		workers[k] = m;
		freq[k] = (int)salary + (workers[k] * 0.01) * 9;
		printf("number index%4d  up salary $%d\n", k, freq[k]);
		puts("");
	}

	for (n = 1; n <= SIZE - 1; n++) {
		freq[x] = salary + (workers[n] * 0.01) * 9;
		if (freq[n] >= 200 && freq[n] < 1000) {
			++frequency[(int)freq[n] / 100];
		}
		else if (freq[n] > 1000) {
			++frequency[10];
		}
	}

	for (x = 2; x <= SIZE; x++) {
		printf("$%4d = $%4d 	%d\n", salary, salary + 99, frequency[x]);
		salary += 100;
	}
	return 0;
}


