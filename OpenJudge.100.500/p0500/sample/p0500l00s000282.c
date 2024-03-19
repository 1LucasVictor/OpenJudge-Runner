#include <stdio.h>

int main(void)
{
    int n, m;
    int i, j, k, l, o;
    int p, q, r;
    int count;
    int s[5], c[5];

    scanf("%d%d", &n, &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &s[i], &c[i]);
    }

    p=0;
    q=0;
    r=0;
    count = 0;

    for (j = 0; j < m; j++)
    {
        for (k = j + 1; k < m; k++)
        {
            if (s[j] == s[k])
            {
                if (c[j] != c[k])
                {
                    count++;
                }
            }
        }
    }

    if (count == 0)
    {
        if (n == 1)
        {
            if(m!=0){
                printf("%d", c[0]);
            }

            else{printf("0");}
        }

        else if (n == 2)
        {
            if(m!=0){
                for (l = 0; l < m; l++)
                {
                    if (s[l] == 1)
                    {
                        p = c[l];
                    }

                    else if (s[l] == 2)
                    {
                        q = c[l];
                    }
                }
			
                if(p!=0){
                    printf("%d", p*10 + q);
                }

                else{printf("-1");}
            }

            else{printf("10");}
        }

        else if (n == 3)
        {
            if(m!=0){
                for (o = 0; o < m; o++)
                {
                    if (s[o] == 1)
                    {
                        p = c[o];
                    }

                    else if (s[o] == 2)
                    {
                        q = c[o];
                    }

                    else if (s[o] == 3)
                    {
                        r = c[o];
                    }
                }
			
                if(p!=0){
            		printf("%d", p*100 + q * 10 + r);
                }

                else{printf("-1");}
            }

            else{printf("100");}     
        }
    }

    else
    {
        printf("-1");
    }

    return 0;
}