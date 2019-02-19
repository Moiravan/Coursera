#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
   char str[128];
   int flag = 0;

   while ( scanf ( "%s", str ) != EOF ) {
      if ( flag ) {
         printf ( " " );
         flag = 0;
      }

      if ( strchr ( str, '.' ) )
         flag = 1;
      if ( !strcmp ( str, "and" ) || !strcmp ( str, "at" ) ||
           !strcmp ( str, "of" ) || !strcmp ( str, "the" ) )
         continue;

      printf ( "%c", toupper ( str[0] ) );
   }

   return 0;
}