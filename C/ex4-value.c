#include <stdio.h>

int min_fun(int a, int b, int c)
{
        int min;
        return c<(min=a<b?a:b)?c:min;
}


int value(int t, int w, int h, int l)
{
    int values;
    int result, num, min;
    switch (t){
        case 79:
            values = 30;
            break;
        case 47:
            values = 10;
            break;
        case 29:
            values = 4;
            break;
        case 82: 
            values = 5;
            break;
        case 26:
            values = 3;
            break;
        case 22:
            values = 9;
            break;
        default:
            return -1; 
    }

    if (w > 0 && h > 0 && l > 0)
    {
        min = min_fun(w,h,l);

        int count = 0;
        for(int i = 1; i <= min; i++)
        {
            if(w % i ==0 && h % i == 0 && l % i == 0 )
            {
                count = i;
            }
        }
        num = (int) (w*h*l)/(count * count * count);
        
        result = values * num *(count * count * count * count * count *count);
        
        return result;
    }
    else
    {
        return -2;
    }
}

int main ()
{
	int type, width, height, length;
	scanf ( "%d%d%d%d", &type, &width, &height, &length );
	printf ( "%d", value ( type, width, height, length ) );
	return 0;
}

