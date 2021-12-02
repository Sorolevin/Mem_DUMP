#include<stdio.h>
#include<string.h>

int main(void){
	void piglat(const char str[]);
	char str[] = "hello people computer jump the";
	char *buf = " ";
 	
	 puts(str );
 	puts(" ");	
	
	for(buf = strtok(str," ") ; buf != '\0' ; buf = strtok(NULL," ")){
			piglat(buf);
	 }
	
	return 0;
}

void piglat(const char str[]){
	
	char df[100] = " ";
		
	char buf[80] = "\0";
	memcpy(df , str, strlen(str));
	strncat( buf , df,1  );	
	strcat( df , buf  );
 	*df = ' ';
	*df= '\r';	
	strcat( df , "ay"  );
  	strcat( df , " "  );
	puts(df );
}
