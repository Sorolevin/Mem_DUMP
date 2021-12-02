#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int  main(void){
	void enterreg( const char read_value[], int *first_value , long   *second_value, char *merge_value);
	char	*buf  ,	 multi[8] = " " ,  str[8] = " ";
	int       region;
	long	 int  numb ; 

	
	while(strlen(str) != 8  ){
		printf("please enter reigion and number  across - :");
		scanf("%s", str);	
	
		if(strlen(str) != 8 ){
		puts("erorr");
		}
	}
	
	buf = strtok(str,"-");
	while(buf){
		enterreg(buf, &region,&numb,multi);
		buf =	strtok(NULL,"-" );
	}
	
	printf("\nregion %d\nlocal number %ld\nfull number %s",  region, numb , multi);
	return 0;
}
void enterreg( const char read_value[], int * first_value , long int  * second_value, char *merge_value){

if( strlen(read_value) == 3  ){
	*first_value  = atoi(read_value);
	strcat(merge_value, read_value );
}
else   {
	*second_value	= atol(read_value);
	strcat(merge_value, read_value );
	}
}
