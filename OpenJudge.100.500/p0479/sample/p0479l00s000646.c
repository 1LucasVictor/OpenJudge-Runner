#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int i,j,n,count;
    int a[200010];
    int b[200010] = {0};
    a[0] = 0;
    a[1] = 0;
    scanf("%d",&n);

    for(i = 2;i<=n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=1;i<=n;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}