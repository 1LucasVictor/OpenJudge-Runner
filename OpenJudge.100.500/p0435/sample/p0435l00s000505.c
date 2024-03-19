#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int n,d;
    scanf("%lld %lld", &n,&d);
    long long int kyori=d*d;
    long long int x,y;
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%lld %lld", &x,&y);
        
        //printf("%lld %lld %lld\n",x,y,kyori);
        if(x*x+y*y<=kyori){
            ans++;
        }
    }
    
    printf("%d",ans);

}
