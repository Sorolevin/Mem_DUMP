/* Exercise 4.31 Solution */
#include <stdio.h>

int main( void )
{
   int line, space, asterick;

   /* top half */

   for ( line = 1; line <= 9; line += 2 )
   {
      for ( space = ( 9 - line ) / 2; space > 0; space-- )
         printf( " " );

      for ( asterick = 1; asterick <= line; asterick++ )
         printf( "*" );

      printf( "\n" );
   }

   /* bottom half */

   for ( line = 7; line >= 0; line -= 2 )
   {
      for ( space = ( 9 - line ) / 2; space > 0; space-- )
         printf( " " );

      for ( asterick = 1; asterick <= line; asterick++ )
         printf( "*" );

      printf( "\n" );
   }
   return 0;
}
