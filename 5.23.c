#include<stdio.h>
	int time(int y,int x,int z);
	int t,q,r,l;
	main(){
		scanf("%d%d%d",&t, &q, &r);
		l = time(t, q,r	);
			
			if(l == 1){
				printf("erorr");
				}
			else
				printf("Return seconds time:%d",	l);
		return 0;
	}
	
time(int y, int x, int z){
	if(y > 23 || y < 1 || x > 60 || x <  1 || z > 60 || z < 1){
		 return 1;
	   }
			else
		  	return  3600 *(y - 12 ) + (60 * x) + z ;	
			  }
