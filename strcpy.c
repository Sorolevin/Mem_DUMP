#include<stdio.h>
#include<string.h>
int main(void){

char  s1[] ="privet";
char s2[] = "privet";

 int l = 0,  k  = 0;
char *my_stnrcat(char *out, const char *in , size_t m   );

char *my_copy_n(char *out, const char *in, int numb   );
		
		int my_strcmp(const char *out, const char *in   );
	
	char *my_strcat(char *out, const char *in);
int my_strncmp(const char *out, const char *in , int numb  );
int m = 0;

 int nm =  3;
  m  = my_strcmp( s1, s2  );


   
printf("my_cmp %d    :   cmp %d"    ,  m ,    strcmp( s1, s2 ) );


	return 0;
}















int my_strcmp(const char *out, const char *in   ){
  for( ;*(in) , *(out) &&  *(in) == *(out); *out++,*in++  );
	   return   *in <= *out ?  *out > *in   : -1   ;
	}




/*


int my_strncmp(const char *out, const char *in , int numb  ){
  	if(numb == 0){return 0;}
  	for (;    *(in) == *(out)  &&     numb   > 1    ;   *in++,     *out++ , numb--  );
  		return   *in <= *out ?  *out > *in   : -1   ;
	}










int my_strcmp(const char *out, const char *in   ){
   int nm = 0;
	
	while( *(in) && *(out)  &&  *(in) == *(out) ){
			
				*in++;
			 	*out++;
			 }  
	printf("in =  %p  :  out =  %p\n" ,in , out  );	
	if(*in <= *out  ){
			nm = ( *out > *in);	
		} 
	else{
			nm =  -1;
		}
	return    nm    ;
	}


*/










/*


char *my_stnrcat(char *out, const char *in , size_t m   ){
   int buf  =  strlen( out )  , p = 0;  
	
	for (;  m  != p ; ){
		 
		 
		 
		if( ( out[buf++] = in[p])  ==  '\0'   ){
			break;
		}	
		  
		  p++;
		
		
		}  
	return out;
}

*/









char *my_stnrcat(char *out, const char *in , size_t m   ){
   int buf  =  strlen( out )  , p = 0;  
	
	for (;  m  != p ; ){
		 
		 
		 
		if( ( out[buf++] = in[p])  ==  '\0'   ){
			break;
		}	
		  
		  p++;
		
		
		}  
	return out;
}















char *my_strcat(char *out, const char *in   ){
   int buf  =  strlen( out )  , p = 0;  
	
	for (;  in[p] != '\0' ; ){
		 out[buf++] = in[p]   ;
		  p++;
		}  

return out;
}



char *my_copy_n(char *out, const char *in, int numb   ){
   int	 p  = 0; 
	for (;   p !=  numb; p		++  ){
		if (  (out[p] = in[p])  == '\0'   ){
			break;
		}   
	}  
return out;
}


char *my_copy(char *out, const char *in ){
   int	 p  = 0; 
	for (; (out[p] = in[p]  )!= '\0'; p++  ){
	}  
return out;
}


char *my_copy_2(char *out, const char *in ){
	int	m = 0;
		while(   (   *(out + m ) = *(in + m )      )    ){
		m++;
		}  
return out;


  }
