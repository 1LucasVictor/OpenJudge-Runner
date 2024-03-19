#include <stdio.h>
int main(void){
    int data[100]={0},i,k,n=0;
    for(i=0;i<100;i++){
        scanf("%d",&data[i]);
        n++;
    }
    
    for(i=0;i<n;i++){
        if(data[i]==0){
            for(k=i;k>=0;k--){
                if(data[k]!=0){
                    printf("%d\n",data[k]);
                    data[k]=0;
                    break;
                }
            }
        }
    }
    return 0;
}