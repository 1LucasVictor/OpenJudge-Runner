#include<stdio.h>
int main(){
    int i,t,n,a[100];
    scanf("%d",&n);
    for(i=0;i<=n-1;i+=1){
        scanf("%d",&a[i]);
    }
    for(t=n-1;t>=0;t-=1){
        if(t==0){
            printf("%d\n",a[t]);
        }
        else{
            printf("%d ",a[t]);
        }
    }
    return 0;
}