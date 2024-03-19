#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x, a, b, c, ans;
    
    while(1)
    {
        ans = 0;
        
        scanf(" %d %d", &n, &x);
        
        if(n == 0 && x == 0) break;
        
        for(a=1; a<n+1; a++)
        {
            for(b=a+1; b<n+1; b++)
            {
                for(c=b+1; c<n+1; c++)
                {
                    if(x == (a+b+c))
                    {
                        ans++;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}