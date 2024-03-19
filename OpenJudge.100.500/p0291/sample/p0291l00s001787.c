#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,j;
    int max = -2147483648;
    int Rt[2000];
    scanf("%d",&n);
    
    for(i=0;i<n;i++) scanf("%d",&Rt[i]);
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(Rt[j]-Rt[i] > max) max = Rt[j]-Rt[i];
        }
    }
    
    printf("%d",max);
}
