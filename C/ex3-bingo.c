#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d%d", &n,&m);
  

    int i,j,k, input;
    int b[m*m],result[n];
    int a[n][m][m];
    int x,y,z;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            for(k = 0; k < m; k++)
            {
                scanf("%d", &input);
                a[i][j][k] = input; 
            }
        }
    }

    for(int len = 0; len < m*m; len++)
    {
        int length;
        scanf("%d", &length);
        b[len] = length;
    }
        
        for(int c = 0; c < m * m; c++)
        {
            for(i = 0; i < n; i++ )
            {
                int pos_y, pos_x;
                
                for(j = 0; j < m; j++)
                {
                    for(k = 0; k < m; k++)
                    {
                        if(a[i][j][k] == b[c])
                        {
                            a[i][j][k] = '*';
                            pos_y = j;
                            pos_x = k;
                        }
                    }
                }

                int temp = 0;

                for(temp = 0; temp < m; temp ++)
                {
                    if(a[i][pos_y][temp] != '*')
                    {
                        break;
                    }
                }

                if(temp == m) {
                    result[i] = 1; 
                    continue;
                }

                for(temp = 0; temp < m; temp ++)
                {
                    if(a[i][temp][pos_x] != '*')
                    {
                        break;
                    }
                }

                if(temp == m) {
                    result[i] = 1; 
                    continue;
                }

                if(pos_x == pos_y)
                {
                    for(temp = 0; temp < m; temp ++)
                    {
                        if(a[i][temp][temp] != '*')
                        {
                           break;  
                        }

                    }
                }

                if(temp == m) {
                    result[i] = 1; 
                    continue;
                }
                
                if(pos_x + pos_y == m - 1) {
                    for(temp = 0; temp < m; temp ++)
                    {
                        if(a[i][temp][m - 1 - temp] != '*')
                        {
                           break;  
                        }

                    }
                }

                if(temp == m)
                {
                    result[i] = 1; 
                }
            }

            int first = 0;
            for (int d = 0; d < n; d++)
            {
                if(result[d] == 1)
                {
                    if(first == 0) {
                        first = 1;
                        printf("%d %d ", b[c], d);
                    } else {
                        printf("%d ", d);
                    }
                }
            }

            if(first != 0) {
                return 0;
            }

          
        }
} 
             
        


    
