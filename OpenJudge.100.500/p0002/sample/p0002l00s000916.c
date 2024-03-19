#include <stdio.h>
int main()
{
    int N, i, x, y, z;
    scanf ("%d", &N);
    if (N>0 && N<=1000){
        for (i=1; i<=N; i++){
            scanf ("%d %d %d", &x, &y, &z);
            if (x>=y && x>=z) {
                if ((x*x)==((y*y)+(z*z)))printf ("YES\n");
                else printf ("NO\n");
            }
            else if (y>=x && y>=z){
                if ((y*y)==((x*x)+(z*z)))printf ("YES\n");
                else printf ("NO\n");
            }
            else if (z>=x && z>=y){
                if ((z*z)==((y*y)+(x*x)))printf ("YES\n");
                else printf ("NO\n");
            }
        }
    }
    return 0;
}