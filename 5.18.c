#include<stdio.h>
	
	int power(int x , int y);
	int a,b;
	int main()	{
				scanf("%d %d",	&a,&b );
				printf("%d",		power(a,b));
		return 0;
	}
	
	int power(x ,y){
		int d = 1, i;
		
		for(i = 1 ; i <= y; i++	)
		d *=  x;
		
		
	
			
		return d;
		}
		
	
