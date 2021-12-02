#include<stdio.h>
	int main(void)	{
			int	x;
			int y = 0;
			int b = 0;
              float d;
				printf("inter digits");
					scanf("%d",	&x);
						while(x != 9999){
                        y++;
                    b += x;

					scanf("%d",	&x);
                    }
                        d = ( float)b/y;
					printf("%.2f", d);
                return 0;
	}
