#include<stdio.h>

int main( void )
{
   long double pi = 0.0, num = 4.0, denom = 1.0;
   long int loop, accuracy;

   accuracy = 400000;    /* set decimal accuracy */

   printf( "Accuracy set at: %ld\n", accuracy );
   printf( "term\t\t  pi\n" );

   for ( loop = 1; loop <= accuracy; loop++ )
   {
      if ( loop % 2 != 0 )
         pi += num / denom;
      else
         pi -= num / denom;

      printf( "%ld\t\t%Lf\n", loop, pi );

      denom += 2.0;
   }

   return 0;
}
