#include<stdio.h>

int main(void){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }

    int s[n];
    for(i=0;i<n;i++){
        s[i]=0;
    }

    for(i=1;i<n;i++){
        s[a[i]-1]++;
    }

    for(i=0;i<n;i++){
        printf("%d\n",s[i]);
    }

    return 0;
}