#include <stdio.h>
int a[9];
int main(void){
    int n,m,i;
    int s,c;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(a[s-1]!=0 && a[s-1]!=c){
            printf("-1");
            return 0;
        }
        a[s-1]=c;
    }
    if(a[0]==0) printf("-1");
    else{
        for(i=0;i<m;i++) printf("%d",a[i]);
    }
    return 0;
}