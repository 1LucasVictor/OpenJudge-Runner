#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int min=x[0],max=x[0];
    for(i=0;i<n;i++){
        if(x[i]>max)
        max=x[i];
        if(x[i]<min)
        min=x[i];
        sum=sum+x[i];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}

