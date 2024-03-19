#include<stdio.h>

int main(void){

    int n=0;
    scanf("%d",&n);

    int a[n];
    int i=0,j=0,mem=0;

    for(i=0;i<n;i++){
        scanf("%d",&mem);
        a[i]=mem;
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                mem=a[i];
                a[i]=a[j];
                a[j]=mem;
            }
        }
    }

    mem=0;
    for(i=0;i<n;i++){
        mem=mem+a[i];
    }

    printf("%d %d %d\n",a[0],a[n-1],mem);

    return 0;
}