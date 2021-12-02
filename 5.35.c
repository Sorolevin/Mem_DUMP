#include<stdio.h>
#include<stdlib.h>
		main(void){
			int b = 0, c = 0, punt = 0; 
			srand(time(NULL));
			b =	1 +(rand() % 1000);
				while(c != b	){
						scanf("%d", &c);
						punt++;
						if(c > b  ){
							printf(" very big \n ");
						}
					else 
					printf("very	small \n");
					}
		
		if(punt < 10){
				printf("ty znaesh secret");
			}
				else if(punt == 10	){
					printf(" molodets");
				}
			else{
				printf("mozhno bystree");
			}
				return 0;
		}
