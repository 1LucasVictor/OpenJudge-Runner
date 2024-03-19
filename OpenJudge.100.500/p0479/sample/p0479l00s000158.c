#include <stdio.h>
int main(void){
    int n,m,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=0;
    }
    for(i=1;i<n;i++){
        scanf("%d",&m);
        a[m-1]=a[m-1]+1;
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
    