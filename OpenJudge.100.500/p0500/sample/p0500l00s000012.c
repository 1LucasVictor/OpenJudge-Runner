#include <stdio.h>
#include <math.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m];
    int c[m];
    int ans=0;
    int f[n];
    int p=0;
    int f2=0;
    for(int i=0; i<n; i++){
        f[i]=0;
    }
    for(int i=0; i<m; i++){
        scanf("%d %d",&s[i],&c[i]);
        f2=0;
        if(s[i]==1&&c[i]==0&&n>1){
            p=1;
        }
        for(int j=0; j<i; j++){
            if(s[j]==s[i]&&c[j]==c[i]){
                f2=1;
            }
            if(s[j]==s[i]&&c[j]!=c[i]){
                p=1;
            }
        }
        if(f2==0){
            ans+=c[i]*pow(10,n-s[i]);
        }
    }
    
    if(ans<pow(10,n-1)&&n>1){
        ans+=pow(10,n-1);
    }
    if(p==1){
        printf("-1\n");
    }
    else{
        printf("%d\n",ans);
    }
}
