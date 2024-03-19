#include<stdio.h>

int main(){
    int i,j,n,r[200000]={0},max;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&r[i]);
    }   
    max=r[0]-r[1];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(max<r[i]-r[j]){
                max=r[i]-r[j];
            }   
        }   
    }   
    printf("%d\n",max);
    return 0;
}