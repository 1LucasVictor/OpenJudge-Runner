#include<stdio.h>
int main(){
    int n,a[1000],i,j=0;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        scanf("%d",&a[j]);
        j++;
    }
    for(i=j-1;i>0;i--){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);
    return 0;
}
