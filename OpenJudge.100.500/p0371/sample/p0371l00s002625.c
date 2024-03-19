#include<stdio.h>
int main(void){
    int MAX=-1000000,min=1000000,i;
    int a[10000]={0},N,some=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]>MAX)MAX = a[i];
        if(a[i]<min)min = a[i];
        if(i == 0)some=a[i];
        else some=some+a[i];
    }
    printf("%d %d %d\n",min,MAX,some);
return 0;
}