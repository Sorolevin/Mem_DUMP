#include<stdio.h>
#include<string.h>

int main(void){
	
	char ext[20] = "" ;
	char *pnt;
	char ptr[20];
	char *mes[13] = {" " , "January " ,"February " , "March ",
					 "April " , "May " , "June " , "July ", 
					 "August " , "September " , "October " ,"November ","December "};
	
	int m = 0;	


	scanf("%s" , ptr );

	
	
	pnt = strtok(ptr, "/" );
	strcat(ext, mes[atoi(pnt)]  );
 	/****************************/
	pnt = strtok(NULL, "/" );
	strcat(ext, pnt);
	strcat(ext, ",");
	strcat(ext, " ");
	/****************************/
	strcat(ext, "19");
	pnt = strtok(NULL, "/" );
	strcat(ext, pnt);
	
	m = strlen(ext);

	ext[m] = '\0';
	
	
	
	
	
		
		
		
		
	puts(ext);
	
	
	
	
	
	
	
	
	

	
	return 0;
}
