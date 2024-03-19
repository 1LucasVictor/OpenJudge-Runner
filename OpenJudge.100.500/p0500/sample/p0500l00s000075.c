#include <stdio.h>
int main(void){
    int n,m,x,y,i,a[]={-1,-1,-1};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        if(a[x-1]==-1 || a[x-1]==y) a[x-1]=y;
        else{
            printf("-1");
            return 0;
        }
    }
    if(a[0]==0){
        printf("-1");
        return 0;
    }
    for(i=0;i<3;i++){
        if(i==0 && a[0]==-1) printf("1");
        else if(a[i]==-1) printf("0");
        else printf("%d",a[i]); 
    }
    return 0;
}