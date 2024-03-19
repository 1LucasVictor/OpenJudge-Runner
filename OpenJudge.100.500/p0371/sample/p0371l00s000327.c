#include<stdio.h>
int main(){
    int n=0,i,j,p=0,x[10000];
    long long int Sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(x[j]<x[j-1]){
                p=x[j-1];
                x[j-1]=x[j];
                x[j]=p;
            }
        }
    }

    for(i=0;i<n;i++){
        Sum+=x[i];
    }

    printf("%d %d %d\n",x[0],x[n-1],Sum);

    return 0;
}