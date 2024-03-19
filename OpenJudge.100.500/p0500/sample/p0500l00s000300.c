#include <stdio.h>
int main(void){
    int n,m,i;
    int s,c;
    int a[3]={-1,-1,-1};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(a[s-1]!=-1 && a[s-1]!=c){
            printf("-1");
            return 0;
        }
        a[s-1]=c;
    }
    if(n==1 && a[0]==-1){
        printf("-1");
        return 0;
    }
    if(n!=1 && a[0]==-1) a[0]=1;
    if(a[0]==0){
        printf("-1");
        return 0;
    } 
    for(i=0;i<n;i++){
            if(a[i]!=-1) printf("%d",a[i]);
            else printf("0");
        }
    return 0;
}