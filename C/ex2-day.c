#include <stdio.h>

int main(void) {
    int i, j, k,m,mon,day,feb, total_days;
    scanf("%d%d%d", &i,&j,&k);

    if(i % 400 == 0 || (i % 100 != 0 && i % 4 == 0 ))
    {
        feb = 29;
    }
    else
    {
        feb = 28;
    }

  
    for(m = 0; m < k; m++)
    {   
        scanf("%d%d", &mon,&day);
        total_days = day - 1;
       
            switch(mon){
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    if (day > 31 || day < 1)
                    {
                        total_days = -2;
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    if(day>30 || day < 1)
                    {
                         total_days = -2;
                    }
                    break;
                case 2:
                    if(day > feb || day < 1)
                    {
                       total_days = -2;
                    }
                    break;

                default:
                    total_days = -1;
                    break;
            }

        if (total_days >= 0) {
            for(; mon > 0; mon--)
            {

                switch(mon -1 ){
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        total_days += 31;
                        break;
                    case 4: case 6: case 9: case 11:
                        total_days += 30;
                        break;
                    case 2:
                        total_days += feb;
                        break;

                    default:
                        break;
                }
            }
            total_days = (total_days + j) % 7;
        }

        printf("%d ", total_days);

        
      

    } 
   
}
