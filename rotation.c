#include<stdio.h>
#include<string.h>


int main(void){
void leftShift1(char * arr, int n);



void shift ( char *array  );
int x = 0;
	char word[] = "12345";
	
	
	leftShift1( word, 7);
	
	
	
	puts(word);
	
	
	
	return 0;
}

void shift( char *array  ){
	void swap( char *elementptr1, char *elementptr2) ;
	int tmp = 0;
	
	for(  ;  tmp != strlen(array) - 1  ; tmp++ ){
		swap(  &array[tmp ]  , &array[tmp  + 1]  );	
		puts(array);
	}
	puts(" ");
}



void swap(char *elementptr1, char *elementptr2) {
	int hold = *elementptr1;
		*elementptr1 = *elementptr2;
		*elementptr2 = hold;
}




void leftShift1(char * arr, int n)
{
    size_t tmpLen = strlen(arr);
    char tmpChar;
    int i, j;
    if (n >= 0)
    {
        for (i = 0; i < n; i++)
        {
            tmpChar = *arr;
            for (j = 0; j < tmpLen - 1; j++)
            {
                *(arr + j) = *(arr + j + 1);
            }
            *(arr + tmpLen - 1) = tmpChar;
        }
    }
    else
    {
        for (i = 0; i < -n; i++)
        {
            tmpChar = *(arr + tmpLen - 1);
            for (j = tmpLen - 1; j > 0; j--)
            {
                *(arr + j) = *(arr + j - 1);
            }
            *arr = tmpChar;
        }
    }
}
