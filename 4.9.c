#include<stdio.h>
	int main(){

			int in ;
			int out = 0 ;

                scanf("%d", &in);
                    while( in*100 > out){
                        out += 100;
                        if(out == 100  ){
                            printf("Summary:%d\n",in);
                        }
                            printf("%d  ",out);
                        }
            return 0;
        }
