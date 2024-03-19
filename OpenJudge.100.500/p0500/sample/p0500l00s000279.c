#include <stdio.h>
int main(void){
    int n,m,i;
    scanf("%d%d",&n,&m);
    int s,c;
    int a[3]={-1,-1,-1};
    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(a[s-1]!=-1 && a[s-1]!=c){
            printf("-1");
            return 0;
        }
        a[s-1]=c;
    }
    if(n!=1 && a[0]==0){
        printf("-1");
        return 0;
    }
    if(n==1 && a[0]==-1) a[0]=0;
    if(n!=1 && a[0]==-1) a[0]=1;
    for(i=0;i<n;i++){
        if(a[i]==-1) printf("0");
        else printf("%d",a[i]);
    }
    return 0;
}