#include<stdio.h>
int main(){
    int n,t,R[200000],j,i;
    scanf("%d",&n);
    for(t=0;t<n;t++){
        scanf("%d",&R[t]);
    }
    
    //int min=R[0];
    int max=R[1]-R[0];
    
    for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        if(max<R[i]-R[j]) max=R[i]-R[j];
    }
    }
    printf("%d\n",max);
    
}
