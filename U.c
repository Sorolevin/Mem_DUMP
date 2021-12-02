#include<stdio.h>
	int mystery (int a,  int b );
	int main(void)	{
		int x,y;



		printf("%s", "Enter two integers:");
			scanf("%d   %d",	&x,&y);
				printf("the result is %d\n", mystery (x,y ));
		return 0;
	}

		int mystery (int a, int b ){
			int m = b;
		if(b >= 1){
				
		if(b   ==  1  )  {
			return a ;
			}
		
			else{
				return a + mystery(a,  b - 1);
			}
		return 0;
		}
			
	else
	if(b   ==  0  )  {
			return b ;
	}
		else   {
				return a + mystery(a,  b + 1);
			}
		return 0;
		}
