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
    for(int i=0; i<n; i++){
        f[i]=0;
    }
    for(int i=0; i<m; i++){
        scanf("%d %d",&s[i],&c[i]);
        ans+=c[i]*pow(10,3-s[i]);
    }
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(s[i]==s[j]&&c[i]!=c[j]){
                f[i]++;
            }
            else if(s[i]==s[j]&&c[i]==c[j]){
                ans-=c[i]*pow(10,3-s[i]);
            }
        }
    }
    for(int i=0; i<n; i++){
        if(f[i]>=1){
            p=1;
        }
    }
    if(p==1){
        printf("-1\n");
    }
    else{
        printf("%d\n",ans);
    }
}
