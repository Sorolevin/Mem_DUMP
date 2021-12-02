#include<stdio.h>


	int maximum(int x,int y,int z);

							main(void){
					int numb1;
					int numb2;
					int numb3;

                    printf("%s", "Enter three integers:	");
                        scanf("%d%d%d",	&numb1, &numb2, &numb3);

                    printf("Maximum is: %d\n",  maximum(numb1,numb2,numb3));
                        return 0;
                    }

					int maximum(int x,int y,int z){

					int max = x;
                        if(y > max){
                            max = y;
                        }

                        if(z > max){
							max = z;
                        }
                        return max;
					}
