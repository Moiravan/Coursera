#include <stdio.h>

int main ()
{
   int n, m;
   int num;
   int w_flag = 0;
   scanf ( "%d%d", &n, &m );

   int board[n][m][m];
   int bingo[n][2][m+1];

   for ( int p = 0; p < n; p++ ) {
      for ( int i = 0; i < m; i++ ) {
         bingo[p][0][i] = bingo[p][1][i] = 0;
         for ( int j = 0; j < m; j++ )
            scanf ( "%d", &board[p][i][j] );
      }
      bingo[p][0][m] = bingo[p][1][m] = 0;
   }

   while ( !w_flag ) {
      // read number
      scanf ( "%d", &num );

      // for each player find number in their board
      for ( int p = 0; p < n; p++ ) {
         int f_flag = 0;
         for ( int i = 0; !f_flag && i < m; i++ )
            for ( int j = 0; !f_flag && j < m; j++ )
               // mark if find
               if ( board[p][i][j] == num ) {
                  f_flag = 1;
                  // row and column
                  bingo[p][0][i]++;
                  bingo[p][1][j]++;
                  // diagnal
                  if ( i == j ) bingo[p][0][m]++;
                  if ( i + j == m-1 ) bingo[p][1][m]++;
                  // win
                  if ( bingo[p][0][i] == m || bingo[p][1][j] == m ||
                       bingo[p][0][m] == m || bingo[p][1][m] == m ) {
                     if ( !w_flag ) {
                        printf ( "%d", num );
                        w_flag = 1;
                     }
                     printf ( " %d", p );
                  }
               }
      }

   }

   return 0;
}