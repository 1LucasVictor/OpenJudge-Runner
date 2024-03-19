#include<stdio.h>
int main(){
    int t,i,sum=0;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d",&x[i]);
    }
    int min=x[0],max=x[0];
    for(i=0;i<t;i++){
        if(x[i]>max)
        max=x[i];
        if(x[i]<min)
        min=x[i];
        sum=sum+x[i];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}

