#include<stdio.h>
int main(void) {
	puts("(A)");
	int one = 10 ,t;
	int space;
	for(t = 1; t <= 10; t++) {
		for(one = 1; one <= t; one++) {
			printf("*");
		}
		printf("\n");

		puts("(B)");
		for(t = 1; t <= 10; t++) {
			for(one = 10; one >= t; one--) {
				printf("*");
			}
			printf("\n");
		}

		puts("(C)");
		for(t = 1; t <= 10; t++) {
			for(space = 1; space <  t; space++)
				printf(" ");
			for(one = 10; one >= t; one--)
				printf("*");
			printf("\n");
		}

		puts("(D)");
		for(t = 1; t <= 10; t++) {
			for(space = 10; space >  t; space--)
				printf(" ");
			for(one = 1; one <= t; one++)
				printf("*");
			printf("\n");
		}

		return 0;
	}
}
