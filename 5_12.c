#include<stdio.h>

    void useLocal(void);
    void useStaticLocal(void);
    void useGlobal(void);
    int x = 1;

    int main(void){
		int x = 5;

printf("Local x in outer scope  of main	is	%d\n",	x);
{
    int   x =  7;
        printf("Local x in outer scope  of main	is	%d\n",	x);
}

printf("Local x in outer scope  of main	is	%d\n",	x);
                useLocal();
				useStaticLocal();
				useGlobal();
                useLocal();
				useStaticLocal();
				useLocal();
                useGlobal();
                useGlobal();
                useStaticLocal();
                useStaticLocal();
                useStaticLocal();
            printf(
                  "\nlocal x in main is %d\n",	x);
                  return 0;
                  }

void useLocal(void){
		int x = 25;
printf("\nLocal  x  in useLocal	is %d after entering useLocal\n",	x);
        x++;
printf("\nLocal  x  in useLocal	is %d after exeting useLocal\n",	x);
       }

void useStaticLocal(void){
    static int x = 50;
    printf("\nLocal static  x  in useLocal	is %d after entering useStaticLocal\n",	x );
    x++;    printf("\nLocal static  x  in useLocal	is %d after exeting useStaticLocal\n",	x );
            }

void useGlobal(void){
printf("\nglobal  x  in useLocal	is %d after entering useGlobal\n",	x );
x *= 10 ;
printf("\nglobal  x  in useLocal	is %d after entering useGlobal\n",	x );
}







