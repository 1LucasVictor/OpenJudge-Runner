#include<stdio.h>

int main()
{
    int n,x;
    int a,b,c;
    int ans;

    while(1){
        scanf("%d %d", &n, &x); 
        if(n==0 && x==0){ 
            break;
        }
        ans = 0;
        
        for(a=1; a<=n; a++){ //どこからどこまでかが重要
            for(b=a+1; b<=n; b++){//どこからどこまでかが重要
                for(c=b+1; c<=n; c++){
                    if(x == a+b+c ) ans++;
                    //printf("%d %d %d %d %d\n",ans , a+b+c, a,b,c);
                }
            }
        }
        
        printf("%d\n",ans);
    }

    return 0;
}
