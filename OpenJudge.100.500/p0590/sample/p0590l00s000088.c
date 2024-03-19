#include<stdio.h>
int main(){
    int a[5],i,j,k,num,l;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            num=a[j]-a[i];
            if(l<num){
                l=num;
            }
        }
    }
    if(l<=k){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }
    return 0;
}