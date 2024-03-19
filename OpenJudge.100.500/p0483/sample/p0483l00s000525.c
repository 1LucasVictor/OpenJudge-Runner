#include<stdio.h>
int main ()
{
    int N,a=0,b=0,c=0,d=0;
    scanf ("%d",&N);
    if (N<=999&&N>=100)
    {
        a=N%10;
        b=N/10;
        c=b%10;
        d=b/10;
        if (a==7||c==7||d==7)
        {
            printf ("Yes\n");
        }
        else
        {
            printf ("No\n");
        }
    }
   return 0;
}
