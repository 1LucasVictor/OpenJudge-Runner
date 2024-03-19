#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10000][4], n[10000], z[10000] = {0};
	int i, I, x, y, b, c;
	for(i = 0 ;  ; i++)
	{
	    scanf("%d%d", &a[i][0], &n[i]);
	    if(a[i][0] == 0 && n[i] == 0)
        {
            x = i;
            break;
        }
	}
	for(i = 0 ; i < x ; i++)
    {
        for(I = 0 ;  ; I++)
        {
            a[i][1] = a[i][0] - I;
            y = n[i] - a[i][1];
            c = a[i][1]*3+3;
            if(c < n[i]) break;
            if(a[i][1] == 0) break;
            for(b = 1 ;  ; b++)
            {
                a[i][2] = y - b;
                a[i][3] = b;
                if(a[i][1] > a[i][2] && a[i][2] > a[i][3] && a[i][2] != 0 && a[i][3] != 0)
                {
                    z[i] += 1;
                }
                else if(a[i][2] < a[i][3] || a[i][2] == a[i][3])
                {
                    break;
                }
            }
        }
    }
    for(i = 0 ; i < x ; i++)
    {
        printf("%d\n", z[i]);
    }
	return 0;
}

